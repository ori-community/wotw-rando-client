package wotw.web.main

import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.a
import react.dom.div
import react.router.dom.browserRouter
import react.router.dom.route
import react.router.dom.switch
import styled.styledP
import wotw.web.ui.TempHeaderComp
import wotw.web.ui.bingo.BingoView
import wotw.web.ui.bingo.GameIdProps

class RootComponent : RComponent<RProps, RState>() {
    override fun RBuilder.render() {
        browserRouter {
            switch {
                route<GameIdProps>("/bingo/:gameId") { props ->
                    child(BingoView::class) {
                        attrs.gameId = props.match.params.gameId
                    }
                }
                route("/") {
                    div {
                        child(TempHeaderComp::class) {}
                        styledP {
                            +"Welcome to the wotw ori rando home page! This site is currently under construction."
                        }
                        a {
                            attrs.href = "https://discord.gg/Ahwh4Na"
                            +"Join the dev discord for more info"
                        }
                    }
                }
            }
        }
    }
}