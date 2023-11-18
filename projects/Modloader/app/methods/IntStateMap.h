#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_GenericMappingEntry_.h>
#include <Modloader/app/structs/IntStateMap.h>

namespace app::classes::IntStateMap {
    IL2CPP_REGISTER_METHOD(0x01B5E220, app::List_1_GenericMappingEntry_*, GetGenericMapping, (app::IntStateMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B5E570, void, SetGenericMapping, (app::IntStateMap * this_ptr, int32_t state_guid, float generic_value))
    IL2CPP_REGISTER_METHOD(0x01B5E930, void, ctor, (app::IntStateMap * this_ptr))
} // namespace app::classes::IntStateMap
