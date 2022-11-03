#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::ByteStateMap {
    IL2CPP_REGISTER_METHOD(0x01B56660, app::List_1_GenericMappingEntry_*, GetGenericMapping, (app::ByteStateMap * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B569A0, void, SetGenericMapping, (app::ByteStateMap * this_ptr, int32_t state_guid, float generic_value))
    IL2CPP_REGISTER_METHOD(0x01B56D30, void, ctor, (app::ByteStateMap * this_ptr))
} // namespace app::classes::ByteStateMap
