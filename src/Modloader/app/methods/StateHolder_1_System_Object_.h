#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IIndexedItem_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/StateHolder_1_System_Object_.h>

namespace app::classes::StateHolder_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x01D19450, app::Object*, ResolveCurrent, app::StateHolder_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D194B0, int32_t, ResolveCurrentIndex, app::StateHolder_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheSetupStates, app::StateHolder_1_System_Object_* this_ptr, app::List_1_IIndexedItem_* cache_to_populate)
    IL2CPP_REGISTER_METHOD(0x01D195E0, void, GetSetupStates, app::StateHolder_1_System_Object_* this_ptr, app::List_1_IIndexedItem_* to_populate)
    IL2CPP_REGISTER_METHOD(0x01D197E0, void, ctor, app::StateHolder_1_System_Object_* this_ptr)
} // namespace app::classes::StateHolder_1_System_Object_
