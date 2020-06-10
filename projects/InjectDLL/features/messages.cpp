#include <pch.h>
#include <interception_macros.h>
#include <dll_main.h>

#include <set>

std::set<MessageBox_o*> trackedBoxes;
MessageBox_o* npcBox = nullptr;

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
    return *(Game_UI_c**) resolve_rva(71714856);
}
System_String_o* lastMessage = nullptr;
uint32_t lastHandle = 0;

BINDING(13847344, MessageBox_o*, MessageControllerB__ShowHintSmallMessage, (MessageControllerB_o* this_ptr, MessageDescriptor_o descriptor, UnityEngine_Vector3_o position, float duration));
BINDING(5621248, UnityEngine_Vector3_o, OnScreenPositions__get_TopCenter, ());
BINDING(13836768, bool, MessageBoxVisibility__get_Visible, (MessageBoxVisibility_o* this_ptr));
BINDING(13820848, void, MessageBox__HideMessageScreenImmediately, (MessageBox_o* this_ptr, int32_t action));
BINDING(13821184, void, MessageBox__HideMessageScreen, (MessageBox_o* this_ptr, int32_t action));
// nullcheck helper
bool isVisible(MessageBox_o* box) { return box && box->Visibility && MessageBoxVisibility__get_Visible(box->Visibility); }

INTERCEPT(13823536, void, MessageBox__Update, (MessageBox_o* this_ptr), {
    MessageBox__Update(this_ptr);
    if (trackedBoxes.find(this_ptr) == trackedBoxes.end() && isVisible(this_ptr)) {
//        debug("(index " + std::to_string(this_ptr->MessageIndex) + ") tracking visible untracked box at " + std::to_string((__int64)this_ptr));
        trackedBoxes.insert(this_ptr);
    }
})
INTERCEPT(6645664,void, NPCMessageBox__FixedUpdate, (NPCMessageBox_o* this_ptr), {
    NPCMessageBox__FixedUpdate(this_ptr);
    if (this_ptr->MessageBox != npcBox && isVisible(this_ptr->MessageBox)) {
//        debug("(index " + std::to_string(this_ptr->MessageBox->MessageIndex)+ ") found interactable: " + std::to_string((__int64)this_ptr->MessageBox));
        npcBox = this_ptr->MessageBox;
    }
})

INTERCEPT(13822720, void, MessageBox__OnDestroy, (MessageBox_o* this_ptr), {
    MessageBox__OnDestroy(this_ptr);
    if (trackedBoxes.find(this_ptr) != trackedBoxes.end()) {
//        debug("intecepted destroy of tracked box, nulling it");
        trackedBoxes.erase(this_ptr);
    }
})

BINDING(0x262520, uint32_t, il2cpp_gchandle_new_weakref, (Il2CppObject* obj, bool track_resurrection))
BINDING(0x262540, Il2CppObject*, il2cpp_gc_get_target, (uint32_t gchandle))
BINDING(0x262560, uint32_t, il2cpp_gchandle_free, (uint32_t gchandle))


extern "C" __declspec(dllexport)
void clearVisibleHints(){
    try {
        for (std::set<MessageBox_o*>::iterator it = trackedBoxes.begin(); it != trackedBoxes.end(); ++it) {
            auto lastBox = *it;
            if (lastBox != npcBox && lastBox->Visibility && MessageBoxVisibility__get_Visible(lastBox->Visibility))
                MessageBox__HideMessageScreenImmediately(lastBox, 0);
        }
        trackedBoxes.clear();
        if (lastHandle) {
            il2cpp_gchandle_free(lastHandle);
            lastHandle = 0;
        }
    }
    catch (...) {
        log("Couldn't clear message box! This should not usually happen :C");
    }
}

UnityEngine_Vector3_o printPos;
extern "C" __declspec(dllexport)
bool hintsReady(){
    printPos = OnScreenPositions__get_TopCenter();
    return printPos.y > 0 && stringHeaderCached;
}


extern "C" __declspec(dllexport)
MessageBox_o * displayHint(System_String_o * hint, float duration){
    try {
        clearVisibleHints();
        const auto messageController = getGameController()->static_fields->MessageController;
        auto lastBox = MessageControllerB__ShowHintSmallMessage(messageController, MessageDescriptor_o{hint, 0, nullptr, nullptr}, printPos, duration);
        lastBox->MessageIndex = 1;
        lastHandle = il2cpp_gchandle_new_weakref((Il2CppObject*) lastBox, true);
        lastMessage = hint;
        trackedBoxes.insert(lastBox);
    return lastBox;
    }
    catch (...) {
        debug("Error caught by display hint. This might not be fine?");
        return NULL;
    }
}

extern "C" __declspec(dllexport)
System_String_o * getCurrentHint(){
    return lastMessage;
}