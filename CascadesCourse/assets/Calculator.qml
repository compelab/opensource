import bb.cascades 1.2

Page {
    property variant result
    titleBar: TitleBar {
        title: "Calculadora"
    }
    Container {
        leftPadding: 40
        rightPadding: 40
        topPadding: 30
        TextField {
            id:txt1
            text: "0"
        }
        
        Container {
            topPadding: 30
            horizontalAlignment: HorizontalAlignment.Center
            Label {
                text: "+"
                textStyle.fontSize: FontSize.XXLarge
                textStyle.fontWeight: FontWeight.Bold
                textStyle.fontStyle: FontStyle.Normal

            }
        }
        TextField {
            topPadding: 30
            id:txt2
            text: "0"
        }
        
        Container {
            topPadding: 100
            Label {
                text: "Resultado: " + result  
            }
        }
        Button {
            text: "Resultado"
            onClicked: {
                var a = parseInt(txt1.text)
                var b = parseInt(txt2.text)
                result = a + b
            }
        }
        
    }
}
