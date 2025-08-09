#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Action.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IInteractable.h>
#include <Modloader/app/structs/LegacyRespawner.h>
#include <Modloader/app/structs/List_1_IInteractable_.h>
#include <Modloader/app/structs/List_1_LegacyRespawner_.h>
#include <Modloader/app/structs/List_1_System_Action_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/List_1_UberInteractionActor_.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/UberInteractionActor.h>

namespace app::classes::ListExtension {
    IL2CPP_REGISTER_METHOD(0x018F2D30, bool, RemoveAtUnordered, app::List_1_System_Object_* list, int32_t index)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_1, app::List_1_System_Object_* list, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_2, app::List_1_LegacyRespawner_* list, app::LegacyRespawner* item)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_3, app::List_1_UnityEngine_GameObject_* list, app::GameObject* item)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_4, app::List_1_System_Action_* list, app::Action* item)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_5, app::List_1_IInteractable_* list, app::IInteractable* item)
    IL2CPP_REGISTER_METHOD(0x018F2E00, bool, RemoveUnordered_6, app::List_1_UberInteractionActor_* list, app::UberInteractionActor* item)
} // namespace app::classes::ListExtension
