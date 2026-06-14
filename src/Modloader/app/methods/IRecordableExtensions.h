#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Component_1.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/IRecordable.h>

namespace app::classes::IRecordableExtensions {
    IL2CPP_REGISTER_METHOD(0x02557A10, app::Component_1*, AsComponent, app::IRecordable* recordable)
    IL2CPP_REGISTER_METHOD(0x02557AD0, int32_t, GetInstanceID, app::IRecordable* recordable)
    IL2CPP_REGISTER_METHOD(0x02557B00, app::GameObject*, GetGameObject, app::IRecordable* recordable)
} // namespace app::classes::IRecordableExtensions
