/*
 * Copyright (c) 2011-2014 BlackBerry Limited.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

import bb.cascades 1.2

TabbedPane {
    tabs: [
        Tab {
            title: qsTr("Filmes em cartaz")
            Page {
                titleBar: TitleBar {
                    title: qsTr("Filmes em cartaz")
                }
                Container {
                    ListView {
                        dataModel: XmlDataModel {
                            source: "asset:///XML/filmes.xml"
                        }
                        listItemComponents: [
                            ListItemComponent {
                                type: "filme"
                                StandardListItem {
                                    title: ListItemData.titulo
                                    imageSource: ListItemData.image
                                }
                            }
                        ]
                    }
                }
            }
        },
        Tab {
            title: qsTr("Cinemas")
            Page {
                titleBar: TitleBar {
                    title: qsTr("Cinemas")
                }
                Label {
                    text: qsTr("Cinemas")
                }
            }
        }
    ]
}
