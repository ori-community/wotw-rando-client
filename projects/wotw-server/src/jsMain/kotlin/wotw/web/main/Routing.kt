package wotw.web.main

import kotlinx.browser.window
import react.RBuilder
import react.RComponent
import react.RProps
import react.RState
import react.dom.a
import react.dom.div
import react.dom.li
import react.dom.ol
import react.router.dom.browserRouter
import react.router.dom.route
import react.router.dom.switch
import styled.styledP
import wotw.web.ui.TempHeaderComp
import wotw.web.ui.bingo.BingoView
import wotw.web.ui.bingo.GameIdProps
import wotw.web.ui.bingo.PlayerIdProps
import wotw.web.ui.bingo.PlayersComponent
import wotw.web.ui.seedgen.SeedGenComponent

class RootComponent : RComponent<RProps, RState>() {
    override fun RBuilder.render() {
        browserRouter {
            switch {
                route<PlayerIdProps>("/bingo/latest/:playerId?") { props ->
                    child(BingoView::class) {
                        attrs.useLatest = true
                        attrs.playerId = props.match.params.playerId
                    }
                }
                route<GameIdProps>("/bingo/:gameId/spectate") { props ->
                    child(BingoView::class) {
                        attrs.gameId = props.match.params.gameId
                        attrs.spectate = true
                    }
                }
                route<GameIdProps>("/bingo/:gameId") { props ->
                    child(BingoView::class) {
                        attrs.gameId = props.match.params.gameId
                        attrs.spectate = false
                    }
                }
                route<GameIdProps>("/game/:gameId") { props ->
                    div {
                        child(PlayersComponent::class) {
                            attrs.gameId = props.match.params.gameId
                        }
                    }
                }
                route("/", exact = true) {
                    div {
                        child(TempHeaderComp::class) {}
                        styledP {
                            +"Welcome to the wotw ori rando home page! This site is currently under construction."
                        }
                        styledP {
                            +"Quick bingo guide:"
                            ol {
                                li {
                                    div {
                                        a {
                                            attrs.href = "/api/login?redir=${window.location.pathname}"
                                            +"Login"
                                        }
                                        +" (Uses discord)"
                                    }
                                }
                                li { +"Click the \"New Bingo Game\" button" }
                                li { +"On the Bingo page, click the \"Join Game\" button" }
                                li { +"Launch the Randomizer, " }
                            }
                        }

                        a {
                            attrs.href = "https://discord.gg/Ahwh4Na"
                            +"Join the dev discord for more info"
                        }
                    }
                }
                route("*") {
                    child(TempHeaderComp::class) {}
                    styledP {
                        +"page not found!"
                    }
                }
            }
        }
    }
}
