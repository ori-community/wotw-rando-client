#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityReactionBehaviour.h>
#include <Modloader/app/structs/IEnumerable_1_EntityReactionBehaviour_.h>
#include <Modloader/app/structs/List_1_EntityReactionBehaviour_.h>

namespace app::classes::System::Collections::Generic::List_1_EntityReactionBehaviour_ {
    IL2CPP_REGISTER_METHOD(0x02FE8360, void, ctor, app::List_1_EntityReactionBehaviour_* this_ptr, app::IEnumerable_1_EntityReactionBehaviour_* collection)
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::EntityReactionBehaviour*, get_Item, app::List_1_EntityReactionBehaviour_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::List_1_EntityReactionBehaviour_* this_ptr)
} // namespace app::classes::System::Collections::Generic::List_1_EntityReactionBehaviour_
