#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_IIndexedItem_.h>
#include <Modloader/app/structs/StateHolder_1_SetupStateModifier_.h>

namespace app::classes::StateHolder_1_SetupStateModifier_ {
    IL2CPP_REGISTER_METHOD(0x01D194B0, int32_t, ResolveCurrentIndex, app::StateHolder_1_SetupStateModifier_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01D197E0, void, ctor, app::StateHolder_1_SetupStateModifier_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, CacheSetupStates, app::StateHolder_1_SetupStateModifier_* this_ptr, app::List_1_IIndexedItem_* cache_to_populate)
} // namespace app::classes::StateHolder_1_SetupStateModifier_
