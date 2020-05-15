#include "pch.h"
#include "../../interceptionMacros.h"
#include "../../dllMain.h"


BINDING(30218144, __int64, String_GetCharArray, (__int64))//System.String$$ToCharArray
BINDING(34816240, int, Array_get_Count, (__int64)) //System.Array$$get_Length
BINDING(34805712, __int64, Array_GetValue, (__int64, int index)) //System.Array$$GetValue
void printCSString(__int64 str){
    if(str)
    {

        __int64 chars = String_GetCharArray(str);
        if(chars)
        {
            auto size = Array_get_Count(chars);
            auto str = new char[size];
            for(int i = 0; i < size; i++)
            {
                auto charStructPointer = Array_GetValue(chars, i);
                str[i] = *(char*) (charStructPointer + 0x10);
            }
            log(str);

        }
    }
}

INTERCEPT(13849632, __int64, showAbilityMessage, (__int64 a, __int64 b, __int64 c), {
    //MessageControllerB$$ShowAbilityMessage
    return 0;
          });

INTERCEPT(13850992, __int64, showShardMessage, (__int64 a, __int64 b, char c), {
    //MessageControllerB$$ShowShardMessage
    return 0;
          });
INTERCEPT(13866448, __int64, showSpiritTreeTextMessage, (__int64 a, __int64 b), {
    //MessageControllerB$$ShowSpiritTreeTextMessage
    return 0;
          });

INTERCEPT(5806192, void, performPickupSequence, (__int64 thisPtr, __int64 info), {
    //SeinPickupProcessor$$PerformPickupSequence
    //noping this removes all pickup animations
          });

INTERCEPT(13843376, bool, anyAbilityPickupStoryMessagesVisible, (__int64 thisPtr), {
    //MessageControllerB$$get_AnyAbilityPickupStoryMessagesVisible
    return 0;
          });

bool stringHeaderCached = false;
INTERCEPT(15446864, __int64, TranslatedMessageProvider_MessageItem_Message, (__int64 pThis1, __int64 pThis2, char language), {
    //TranslatedMessageProvider.MessageItem$$GetDescriptor
        auto result = TranslatedMessageProvider_MessageItem_Message(pThis1, pThis2, language);
        if(!stringHeaderCached || (result && isInShopScreen()))
            {
            __int64 newString = CSharpLib->call<__int64>("ShopStringRepl", *(__int64*) result);
            stringHeaderCached = true;
            if(newString)
            {
                *(__int64*) result = newString;
            }
        }
        return (__int64) result;
                    });

Game_UI_c* getGameController(){
    return *(Game_UI_c**) resolve_rva(71319816);
}

BINDING(13847344, MessageBox_o*, MessageControllerB__ShowHintSmallMessage, (MessageControllerB_o* this_ptr, MessageDescriptor_o descriptor, UnityEngine_Vector3_o position, float duration))
BINDING(5621248, UnityEngine_Vector3_o, OnScreenPositions__get_TopCenter, ())
//MessageBox_o* lastHint = nullptr;
System_String_o* lastMessage = nullptr;
uint32_t lastHandle = 0;
BINDING(13820848, void, MessageBox__HideMessageScreenImmediately, (MessageBox_o* this_ptr, int32_t action))
BINDING(13821184, void, MessageBox__HideMessageScreen, (MessageBox_o* this_ptr, int32_t action))


BINDING(0x262170, uint32_t, il2cpp_gc_new_weakref, (Il2CppObject* obj, bool track_resurrection))
BINDING(0x262190, Il2CppObject*, il2cpp_gc_get_target, (uint32_t gchandle))
BINDING(0x2621B0, uint32_t, il2cpp_gchandle_free, (uint32_t gchandle))


extern "C" __declspec(dllexport)
void clearMessageBox(MessageBox_o * messageBox){
    try {
        MessageBox__HideMessageScreenImmediately(messageBox, 0);
    } catch(...) {
        debug("Couldn't clear message box, this is fine");
    }
}

extern "C" __declspec(dllexport)
void clearLastHint(){
    if(lastHandle){
        MessageBox_o* lastBox = (MessageBox_o*) il2cpp_gc_get_target(lastHandle);
        if(lastBox)
        {
            clearMessageBox(lastBox);
        }
        il2cpp_gchandle_free(lastHandle);
    }
}

extern "C" __declspec(dllexport)
bool hintsReady(){
    return stringHeaderCached;
}
extern "C" __declspec(dllexport)
MessageBox_o * displayHint(System_String_o * hint, float duration){
    clearLastHint();

    const auto messageController = getGameController()->static_fields->MessageController;
    const auto box = MessageControllerB__ShowHintSmallMessage(messageController, MessageDescriptor_o{hint, 0, nullptr, nullptr}, OnScreenPositions__get_TopCenter(), duration);
    lastHandle = il2cpp_gc_new_weakref((Il2CppObject*) box, true);

    lastMessage = hint;
    return box;
}

extern "C" __declspec(dllexport)
System_String_o * getCurrentHint(){
    return lastMessage;
}