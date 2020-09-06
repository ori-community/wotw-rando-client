package wotw.server.bingo

import kotlinx.serialization.encodeToString
import kotlinx.serialization.json.Json
import wotw.io.messages.json
import java.time.Instant
import kotlin.random.Random

fun generatePool() = mutableListOf(
    group(
        "Buy # maps",
        bool("Inkwater Marsh", 48248, 18767),
        bool("Midnight Burrows", 48248, 45538),
        bool("Kwoloks Hollow", 48248, 3638),
        bool("The Wellspring", 48248, 1590),
        bool("Luma Pools", 48248, 1557),
        bool("Baurs Reach", 48248, 29604),
        bool("Mouldwood Depths", 48248, 48423),
        bool("Windswept Wastes", 48248, 61146),
        bool("Willows End", 48248, 4045)
        ),
    bool("Go fish!", 1, 1),
    group(
        "Spend Gorlek Ore",
        threshold("14", 1, 1, 14),
        threshold("32", 1, 1, 32),

    ),
    group(
        "Collect Wisps",
        bool("Strength", 945, 49747),
        bool("Memory", 28895, 25522),
        bool("Eyes", 18793, 63291),
        bool("Heart", 10289, 22102),
        bool("Voice", 46462, 59806)
    ),
    group(
        "Complete Combat Shrines",
        bool("Howl's Den", 24922, 13993),
        bool("Inkwater Marsh", 21786, 18109),
        bool("Wellspring Glades", 44310, 9902),
        bool("Silent Woods", 58674, 29265),
        bool("Mouldwood Depths", 18793, 31937)
    ),
    group(
        "Complete Quests",
        threshold("The Silent Teeth", 937, 34641, 4, hideValue = true),
        threshold("Beneath Shifting Sands", 14019, 35399, 3, hideValue = true),
        threshold("Lost in Paradise", 14019, 35087, 3, hideValue = true),
        threshold("Breaking the Mould", 14019, 45931, 3, hideValue = true),
        threshold("The Highest Reach", 14019, 8973, 3, hideValue = true),
        threshold("The Missing Key ", 48248, 51645, 3, hideValue = true),
        threshold("Into the Burrows", 48248, 18458, 4, hideValue = true),
        threshold("The Lost Compass", 14019, 20667, 3, hideValue = true),
        threshold("A Little Braver", 14019, 15983, 3, hideValue = true),
        threshold("Family Reunion", 14019, 27804, 4, hideValue = true),
        threshold("The Tree Keeper", 14019, 59708, 3, hideValue = true),
        threshold("A Diamond in the Rough", 14019, 61011, 5, hideValue = true),
        threshold("Hand to Hand", 14019, 26318, 11, hideValue = true),
        threshold("Into The Darkness", 14019, 33776, 3, hideValue = true),
        threshold("Kwolok's Wisdom", 14019, 50597, 4, hideValue = true),
        threshold("The Silent Map", 14019, 24683, 5, hideValue = true),
        threshold("Rebuilding the Glades", 14019, 44578, 2, hideValue = true),
        threshold("Regrowing the Glades", 14019, 26394, 2, hideValue = true),
    ),
    threshold("Store Spirit Light", 1, 1, triag(2000, 6000, 4000)),
    threshold("Spend Spirit Light", 1, 1, triag(2000, 6000, 3000)),
).also {
    it += (1..30).map { bool("Test Goal $it", it, it) }
}

class BingoBoardGenerator() {
    fun generateBoard(seed: String? = null): BingoCard {
        val random = Random(seed?.hashCode() ?: Instant.now().epochSecond.toInt())
        val pool = generatePool()

        val config = GeneratorConfig(random)

        val card = BingoCard()
        for (x in 1..5)
            for (y in 1..5) {
                var generatedGoal: BingoGoal? = null
                while(generatedGoal == null){
                    val goal = pool.random(random)
                    generatedGoal = goal(config)
                    if(generatedGoal == null)
                        pool -= goal
                }
                card.goals[x to y] = generatedGoal
            }

        return card
    }
}

fun main(){
    println(Json{allowStructuredMapKeys = true}.encodeToString(BingoBoardGenerator().generateBoard("roastbeef")))
}