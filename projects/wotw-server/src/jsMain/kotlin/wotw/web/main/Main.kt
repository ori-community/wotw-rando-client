package wotw.web.main

import react.dom.render
import wotw.io.messages.protobuf.BingoBoard
import wotw.web.bingo.BingoCardComponent
import kotlin.browser.document

fun main(){
    val content = document.getElementById("content")
    render(content){
        child(RootComponent::class){}
    }
}