#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/fsAotConfiguration.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/fsAotConfiguration_Entry.h>

namespace app::classes::FullSerializer::fsAotConfiguration {
    IL2CPP_REGISTER_METHOD(0x01507490, bool, TryFindEntry, (app::fsAotConfiguration * this_ptr, app::Type* type, app::fsAotConfiguration_Entry* result))
    IL2CPP_REGISTER_METHOD(0x01507700, void, UpdateOrAddEntry, (app::fsAotConfiguration * this_ptr, app::fsAotConfiguration_Entry entry))
    IL2CPP_REGISTER_METHOD(0x01507930, void, ctor, (app::fsAotConfiguration * this_ptr))
} // namespace app::classes::FullSerializer::fsAotConfiguration
