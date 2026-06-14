#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/List_1_EntityReactionBehaviour_.h>
#include <Modloader/app/structs/MoonSet_1_EntityReactionBehaviour_.h>

namespace app::classes::MoonSet_1_EntityReactionBehaviour_ {
    IL2CPP_REGISTER_METHOD(0x02AF7A10, void, PopulateFromList, app::MoonSet_1_EntityReactionBehaviour_* this_ptr, app::List_1_EntityReactionBehaviour_* values)
    IL2CPP_REGISTER_METHOD(0x02AF78F0, app::EntityReactionBehaviour*, GetValue, app::MoonSet_1_EntityReactionBehaviour_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x02AF7920, int32_t, get_Count, app::MoonSet_1_EntityReactionBehaviour_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AF7B00, void, ctor, app::MoonSet_1_EntityReactionBehaviour_* this_ptr)
} // namespace app::classes::MoonSet_1_EntityReactionBehaviour_
