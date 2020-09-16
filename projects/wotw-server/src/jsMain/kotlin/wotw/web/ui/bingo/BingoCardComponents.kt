package wotw.web.ui.bingo

import io.ktor.client.request.*
import kotlinx.coroutines.GlobalScope
import kotlinx.coroutines.launch
import kotlinx.css.*
import kotlinx.html.js.onClickFunction
import react.*
import react.dom.p
import styled.css
import styled.styledDiv
import styled.styledP
import wotw.io.messages.protobuf.*
import wotw.io.messages.protobuf.Position
import wotw.web.io.WebSocketComponent
import wotw.web.main.Application
import wotw.web.ui.UserInfoComponent
import wotw.web.util.BACKEND_HOST
import wotw.web.util.BACKEND_PORT
import wotw.web.util.hbox
import wotw.web.util.vbox

external interface GameIdProps : RProps {
    var gameId: Long
}

external interface BingoCardState : RState {
    var board: BingoBoard
}

external interface BingoSquareProps : RProps {
    var gridPosition: Position
    var size: Pair<LinearDimension?, LinearDimension?>?
    var boardSize: Int
    var text: String
    var completed: Boolean
    var goals: List<BingoGoal>
}

external interface BingoSquareState : RState {
    var marked: Boolean
}

external interface BingoGoalProps : RProps {
    var text: String
    var completed: Boolean
}

class BingoView : RComponent<GameIdProps, RState>() {
    override fun RBuilder.render() {
        vbox {
            child(UserInfoComponent::class){
            }
            hbox {
                css {
                    gap = Gap("10px")
                }
                child(BingoCardComponent::class) {
                    attrs.gameId = props.gameId
                }
                child(BingoPlayersComponent::class) {
                    attrs.gameId = props.gameId
                }
            }
        }
    }
}


val labelSize = 20.px
val gapSize = 5.px

class BingoCardComponent(props: GameIdProps) : RComponent<GameIdProps, BingoCardState>(props) {
    override fun BingoCardState.init(props: GameIdProps) {
        board = BingoBoard(size = 5)
    }

    override fun componentDidMount() {
        GlobalScope.launch {
            val boardData = Application.client.get<BingoData>(path = "bingo/${props.gameId}")
            setState {
                this.board = boardData.board
            }
            Application.eventBus.send(SyncPlayersMessage(boardData.players))
        }

        Application.eventBus.register(this, SyncBoardMessage::class) {
            setState {
                if (it.replace)
                    board = it.board
                else board += it.board
            }
        }
    }

    override fun componentWillUnmount() {
        Application.eventBus.unregisterAll(this)
    }

    override fun RBuilder.render() {
        styledDiv {
            css {
                position = kotlinx.css.Position.relative
                width = LinearDimension("min(80%, 95vh)")
                before {
                    content = QuotedString("")
                    float = Float.left
                    paddingTop = 100.pct
                }
            }
            vbox {
                css {
                    gap = Gap(gapSize.toString())
                    float = Float.left
                    width = 100.pct
                    height = 100.pct
                }
                val size = state.board.size
                val cardRange = 1..size
                for (y: Int in 0..size + 1) {
                    hbox {
                        css {
                            gap = Gap(gapSize.toString())
                            width = 100.pct
                            height =
                                if (y !in cardRange) labelSize else LinearDimension("calc((100% - 2 * $labelSize - ${size + 1} * $gapSize) / $size)")
                            textAlign = TextAlign.center
                        }
                        for (x: Int in 0..size + 1) {
                            //why are grids not 0-based again? :<
                            val gridPos = Position(x + 1, y + 1)
                            val width = if (x !in cardRange) labelSize else null
                            val height = if (y !in cardRange) labelSize else null
                            val square = state.board[Position(x, y)]
                            val text = when {
                                square != null -> square.text
                                x == 0 && y == 0 || x > size && y > size -> "X"
                                x == 0 && y > size || x > size && y == 0 -> "Y"
                                x !in cardRange -> y.toString()
                                else -> (x + 64).toChar().toString()
                            }
                            val completed = when {
                                square != null -> square.completed
                                x == 0 && y == 0 || x > size && y > size -> cardRange.all {
                                    state.board[Position(it, it)]?.completed == true
                                }
                                x == 0 && y > size || x > size && y == 0 -> cardRange.all {
                                    state.board[Position(size + 1 - it, it)]?.completed == true
                                }
                                x !in cardRange -> cardRange.all {
                                    state.board[Position(it, y)]?.completed == true
                                }
                                else -> cardRange.all {
                                    state.board[Position(x, it)]?.completed == true
                                }
                            }

                            child(BingoSquareComponent::class) {
                                attrs.gridPosition = gridPos
                                attrs.size = width to height
                                attrs.boardSize = size
                                attrs.completed = completed
                                attrs.goals = square?.goals ?: emptyList()
                                attrs.text = text
                            }
                        }
                    }
                }
            }
            child(WebSocketComponent::class) {
                attrs.url = "wss://$BACKEND_HOST:$BACKEND_PORT/api/bingosync/${props.gameId}"
            }
        }
    }
}

class BingoSquareComponent : RComponent<BingoSquareProps, BingoSquareState>() {
    override fun BingoSquareState.init() {
        marked = false
    }

    override fun RBuilder.render() {
        styledDiv {
            css {
                width = props.size?.first
                    ?: LinearDimension("calc((100% - 2 * $labelSize  - ${props.boardSize + 1} * $gapSize) / ${props.boardSize})")
                height = 100.pct
                textAlign = TextAlign.center
                verticalAlign = VerticalAlign.middle
                margin = if (props.text.length < 4 ) "0px" else margin
                fontWeight = FontWeight.bold
                backgroundColor =
                    if (props.completed) Color.green else if (state.marked) Color.lightBlue else Color.lightGray
            }
            p {
                +props.text
            }
            attrs {
                onClickFunction = {
                    it.preventDefault()
                    setState {
                        marked = !marked
                    }
                }
            }
            for (it in props.goals) {
                child(BingoGoalComponent::class) {
                    attrs.text = it.text
                    attrs.completed = it.completed
                }
            }
        }
    }
}

class BingoGoalComponent(props: BingoGoalProps) : RComponent<BingoGoalProps, RState>(props) {
    override fun RBuilder.render() {
        styledP {
            css {
                textAlign = TextAlign.center
            }
            +props.text
            if (props.completed) {
                css {
                    backgroundColor = Color.greenYellow
                }
            }
        }
    }
}