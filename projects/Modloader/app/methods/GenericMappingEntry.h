#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/GenericMappingEntry.h>

namespace app::classes::GenericMappingEntry {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::GenericMappingEntry* this_ptr)
}
