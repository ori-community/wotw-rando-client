#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/IContext.h>
#include <Modloader/app/structs/SetBooleanStateDescriptorEntity.h>

namespace app::classes::Moon::Timeline::SetBooleanStateDescriptorEntity {
    IL2CPP_REGISTER_METHOD(0x00785B90, void, OnStartPlayback, app::SetBooleanStateDescriptorEntity* this_ptr, app::IContext* context)
    IL2CPP_REGISTER_METHOD(0x00785C60, void, ctor, app::SetBooleanStateDescriptorEntity* this_ptr)
} // namespace app::classes::Moon::Timeline::SetBooleanStateDescriptorEntity
