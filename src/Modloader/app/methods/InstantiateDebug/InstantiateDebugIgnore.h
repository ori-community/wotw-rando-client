#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_System_String_.h>
#include <Modloader/app/structs/ICollection_1_System_String_.h>
#include <Modloader/app/structs/InstantiateDebugIgnore.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::InstantiateDebug::InstantiateDebugIgnore {
    IL2CPP_REGISTER_METHOD(0x0062CDF0, app::ICollection_1_System_String_*, get_IgnoreCache, app::InstantiateDebugIgnore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0062CE20, bool, IsIgnored, app::InstantiateDebugIgnore* this_ptr, app::String* prefab_name)
    IL2CPP_REGISTER_METHOD(0x0062CFB0, app::HashSet_1_System_String_*, ConstructRuntimeCache, app::InstantiateDebugIgnore* this_ptr)
    IL2CPP_REGISTER_METHOD(0x0062D1C0, void, ctor, app::InstantiateDebugIgnore* this_ptr)
} // namespace app::classes::InstantiateDebug::InstantiateDebugIgnore
