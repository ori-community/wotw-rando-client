#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DictionaryList_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::DictionaryList_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x019E0B10, int32_t, get_Count, (app::DictionaryList_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E0930, void, Clear, (app::DictionaryList_2_System_Object_System_Object_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019E0990, void, Add, (app::DictionaryList_2_System_Object_System_Object_ * this_ptr, app::Object* key, app::Object* value))
    IL2CPP_REGISTER_METHOD(0x019E0B40, void, Remove, (app::DictionaryList_2_System_Object_System_Object_ * this_ptr, app::Object* key))
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, (app::DictionaryList_2_System_Object_System_Object_ * this_ptr))
} // namespace app::classes::DictionaryList_2_System_Object_System_Object_
