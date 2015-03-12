import bb.cascades 1.2

Page {
    Container {
        Button {
            id:"btn"
            onClicked: {
                _list.addList()
            }
        }
        ListView {
            dataModel: _list.model
            
            listItemComponents:[
                
                ListItemComponent {
                    type: "item"
                    StandardListItem {
                        
                        title: ListItemData.nome
                        // description: "Uma descrição " + ListItemData.subtitle
                    onTouchExit: {
                        btn.text = "Cliquei"
                        
                    }
                    }
                }
            ]
        }
    
    }
}