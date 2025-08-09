#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SpiritShardDescriptionCollection.h>

namespace app::classes::SpiritShardDescriptionCollection {
    IL2CPP_REGISTER_METHOD(0x00D67B70, void, OnValidate, app::SpiritShardDescriptionCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D67C10, void, Awake, app::SpiritShardDescriptionCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D67C20, void, GuaranteeLevel0Entry, app::SpiritShardDescriptionCollection* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00D68070, void, ctor, app::SpiritShardDescriptionCollection* this_ptr)
} // namespace app::classes::SpiritShardDescriptionCollection
