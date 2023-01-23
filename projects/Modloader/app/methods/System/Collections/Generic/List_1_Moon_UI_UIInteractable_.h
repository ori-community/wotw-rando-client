#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_Moon_UI_UIInteractable_.h>
#include <Modloader/app/structs/UIInteractable.h>
#include <Modloader/app/structs/List_1_T_Enumerator_Moon_UI_UIInteractable_.h>

namespace app::classes::System::Collections::Generic::List_1_Moon_UI_UIInteractable_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_Moon_UI_UIInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047214F8, List_1_Moon_UI_UIInteractable__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::UIInteractable*, get_Item, (app::List_1_Moon_UI_UIInteractable_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHODINFO(0x04727A58, List_1_Moon_UI_UIInteractable__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x022A4010, void, Clear, (app::List_1_Moon_UI_UIInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789C60, List_1_Moon_UI_UIInteractable__Clear__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_Moon_UI_UIInteractable_ * this_ptr, app::UIInteractable* item))
    IL2CPP_REGISTER_METHODINFO(0x0475EED8, List_1_Moon_UI_UIInteractable__Add__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02FE8D00, bool, Contains, (app::List_1_Moon_UI_UIInteractable_ * this_ptr, app::UIInteractable* item))
    IL2CPP_REGISTER_METHODINFO(0x04739BE0, List_1_Moon_UI_UIInteractable__Contains__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F12F0, bool, Remove, (app::List_1_Moon_UI_UIInteractable_ * this_ptr, app::UIInteractable* item))
    IL2CPP_REGISTER_METHODINFO(0x0472F080, List_1_Moon_UI_UIInteractable__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0B10, app::List_1_T_Enumerator_Moon_UI_UIInteractable_, GetEnumerator, (app::List_1_Moon_UI_UIInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04776308, List_1_Moon_UI_UIInteractable__GetEnumerator__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025F0BE0, int32_t, IndexOf, (app::List_1_Moon_UI_UIInteractable_ * this_ptr, app::UIInteractable* item))
    IL2CPP_REGISTER_METHODINFO(0x0472EB18, List_1_Moon_UI_UIInteractable__IndexOf__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_Moon_UI_UIInteractable_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04760D20, List_1_Moon_UI_UIInteractable___ctor__MethodInfo)
} // namespace app::classes::System::Collections::Generic::List_1_Moon_UI_UIInteractable_
