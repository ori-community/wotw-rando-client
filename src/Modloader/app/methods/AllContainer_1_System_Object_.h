#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllContainer_1_System_Object_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AllContainer_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019D77E0, int32_t, get_Count, app::AllContainer_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D7800, app::Object*, get_Item, app::AllContainer_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, app::AllContainer_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, app::AllContainer_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x019D79B0, void, RemoveAt, app::AllContainer_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, app::AllContainer_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D79F0, bool, Contains, app::AllContainer_1_System_Object_* this_ptr, app::Object* item)
    IL2CPP_REGISTER_METHOD(0x019D7A20, void, GetList, app::AllContainer_1_System_Object_* this_ptr, app::List_1_System_Object_* list)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_System_Object_*, RawList, app::AllContainer_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::AllContainer_1_System_Object_* this_ptr)
} // namespace app::classes::AllContainer_1_System_Object_
