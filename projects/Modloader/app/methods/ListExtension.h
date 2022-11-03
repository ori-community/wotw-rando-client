#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ListExtension {
    IL2CPP_REGISTER_METHOD(0x018F2D30, bool, RemoveAtUnordered, (app::List_1_System_Object_ * list, int32_t index))
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_1, (app::List_1_System_Object_ * list, app::Object* item))
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_2, (app::List_1_LegacyRespawner_ * list, app::LegacyRespawner* item))
    IL2CPP_REGISTER_METHODINFO(0x047310B0, ListExtension_RemoveUnordered_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_3, (app::List_1_UnityEngine_GameObject_ * list, app::GameObject* item))
    IL2CPP_REGISTER_METHODINFO(0x0470B8E8, ListExtension_RemoveUnordered_2__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_4, (app::List_1_System_Action_ * list, app::Action* item))
    IL2CPP_REGISTER_METHODINFO(0x0474DD60, ListExtension_RemoveUnordered_3__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_5, (app::List_1_IInteractable_ * list, app::IInteractable* item))
    IL2CPP_REGISTER_METHODINFO(0x04728E88, ListExtension_RemoveUnordered_4__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_6, (app::List_1_UberInteractionActor_ * list, app::UberInteractionActor* item))
    IL2CPP_REGISTER_METHODINFO(0x0477D7D8, ListExtension_RemoveUnordered_5__MethodInfo)
} // namespace app::classes::ListExtension
