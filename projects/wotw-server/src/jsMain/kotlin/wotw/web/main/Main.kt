package wotw.web.main

import kotlinx.browser.document
import react.dom.render

fun main(){
    val content = document.getElementById("content")
    render(content){
        child(RootComponent::class){}
    }
}