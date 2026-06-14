#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AllContainer_1_CollectablePlaceholder_.h>
#include <Modloader/app/structs/CollectablePlaceholder.h>

namespace app::classes::AllContainer_1_CollectablePlaceholder_ {
    IL2CPP_REGISTER_METHOD(0x019D79D0, void, Clear, app::AllContainer_1_CollectablePlaceholder_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D7830, void, Add, app::AllContainer_1_CollectablePlaceholder_* this_ptr, app::CollectablePlaceholder* item)
    IL2CPP_REGISTER_METHOD(0x019D7990, void, Remove, app::AllContainer_1_CollectablePlaceholder_* this_ptr, app::CollectablePlaceholder* item)
    IL2CPP_REGISTER_METHOD(0x018E6D70, void, ctor, app::AllContainer_1_CollectablePlaceholder_* this_ptr)
} // namespace app::classes::AllContainer_1_CollectablePlaceholder_
