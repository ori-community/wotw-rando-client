#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::UnityEngine::EventSystems::RaycasterManager {
    IL2CPP_REGISTER_METHOD(0x01F26A40, void, AddRaycaster, (app::BaseRaycaster * base_raycaster))
    IL2CPP_REGISTER_METHOD(0x01F26B60, app::List_1_UnityEngine_EventSystems_BaseRaycaster_*, GetRaycasters, ())
    IL2CPP_REGISTER_METHOD(0x01F26C00, void, RemoveRaycasters, (app::BaseRaycaster * base_raycaster))
    IL2CPP_REGISTER_METHOD(0x01F26D20, void, cctor, ())
} // namespace app::classes::UnityEngine::EventSystems::RaycasterManager
