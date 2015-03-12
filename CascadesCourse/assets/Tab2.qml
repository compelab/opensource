import bb.cascades 1.2

NavigationPane {
    id:navPane
    Page {
        Container {
            
            Button {
            text: "NavigationPane"    
                onClicked: {
                var a = tab1Creator.createObject()
                navPane.push(a)
                }
            }
            
        }
    }
    attachedObjects: [
        ComponentDefinition {
            id: tab1Creator
            Tab1 {
                
            }
        }
    ]
 
}