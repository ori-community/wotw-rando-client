#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericDataContainer.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::GenericDataContainer {
    IL2CPP_REGISTER_METHOD(0x01B5C7F0, void, CopyDataFrom, (app::GenericDataContainer * this_ptr, app::GenericDataContainer* other))
    IL2CPP_REGISTER_METHOD(0x01B5C840, bool, HasType, (app::GenericDataContainer * this_ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x01B5CB50, void, InitializeData, (app::GenericDataContainer * this_ptr, int32_t booleans, int32_t ints, int32_t bytes, int32_t floats, int32_t vectors, int32_t colors))
    IL2CPP_REGISTER_METHOD(0x01B5CFD0, void, Clear, (app::GenericDataContainer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5D170, void, ctor, (app::GenericDataContainer * this_ptr))
} // namespace app::classes::GenericDataContainer
