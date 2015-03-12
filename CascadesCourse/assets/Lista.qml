import bb.cascades 1.2

Page {
    property string titlebarname: "asdasd"
    Container {
        ListView {
            dataModel: XmlDataModel {
                source: "list.xml"
            }
            listItemComponents: [
                ListItemComponent {
                    type: "header"
                    Header {
                        title: ListItemData.title
                    }
                },
                ListItemComponent {
                    type: "item"
                    //                    StandardListItem {
                    //                        title: "O nome deste item é " + ListItemData.title
                    //                        description: "Uma descrição " + ListItemData.subtitle
                    //                    }
                    Container {
                        Label {
                            text: "o nome é " + ListItemData.title
                        }
                    }
                }

            ]

        }

    }
}
