#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_PhysicsDebugTools_Record_.h>
#include <Modloader/app/structs/Predicate_1_PhysicsDebugTools_Record_.h>
#include <Modloader/app/structs/Record.h>

namespace app::classes::System::Collections::Generic::List_1_PhysicsDebugTools_Record_ {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_PhysicsDebugTools_Record_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::Record*, get_Item, app::List_1_PhysicsDebugTools_Record_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, app::List_1_PhysicsDebugTools_Record_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x025F05A0, app::Record*, Find, app::List_1_PhysicsDebugTools_Record_* this_ptr, app::Predicate_1_PhysicsDebugTools_Record_* match)
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, app::List_1_PhysicsDebugTools_Record_* this_ptr, app::Record* item)
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, app::List_1_PhysicsDebugTools_Record_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_PhysicsDebugTools_Record_
