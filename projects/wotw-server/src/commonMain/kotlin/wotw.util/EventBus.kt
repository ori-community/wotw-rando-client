package wotw.util

import kotlin.reflect.KClass

class EventBus{
    private val messages: MutableMap<KClass<*>, MutableList<suspend (Any) -> Unit>> = hashMapOf()
    private val registrations: MutableMap<Any, MutableList<Pair<KClass<*>, suspend (Any) -> Unit>>> = hashMapOf()

    fun <T: Any> register(receiver: Any, messageType: KClass<T>, block: suspend (T) -> Unit){
        val typeErasedBlock: suspend (Any) -> Unit = {block(it as T)}
        registrations.getOrPut(receiver){ mutableListOf() }.add(messageType to typeErasedBlock)
        messages.getOrPut(messageType){ mutableListOf() }.add(typeErasedBlock)
    }

    fun unregisterAll(receiver: Any){
        registrations.remove(receiver)?.forEach {(type, handler) ->
            messages.getOrPut(type){ mutableListOf() }.remove(handler)
        }
    }

    suspend fun send(message: Any){
        //this is for js-compatibility - sadly .supertypes doesn't exist on js
        //There's *very easy* optimization possible here, but we'll ignore that until necessary
        messages.filterKeys{it.isInstance(message)}.forEach { (_, list) -> list.forEach { it.invoke(message) } }
    }

}