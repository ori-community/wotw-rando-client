#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CacheDict_2_System_Object_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::System::Dynamic::Utils::CacheDict_2_System_Object_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x028796E0, void, set_Item, app::CacheDict_2_System_Object_System_Object_* this_ptr, app::Object* key, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x02879320, void, ctor, app::CacheDict_2_System_Object_System_Object_* this_ptr, int32_t size)
    IL2CPP_REGISTER_METHOD(0x028793A0, int32_t, AlignSize, int32_t size)
    IL2CPP_REGISTER_METHOD(0x028793D0, bool, TryGetValue, app::CacheDict_2_System_Object_System_Object_* this_ptr, app::Object* key, app::Object** value)
    IL2CPP_REGISTER_METHOD(0x028794B0, void, Add, app::CacheDict_2_System_Object_System_Object_* this_ptr, app::Object* key, app::Object* value)
} // namespace app::classes::System::Dynamic::Utils::CacheDict_2_System_Object_System_Object_
