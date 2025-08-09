#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/HashSet_1_Moon_Entity_.h>

namespace app::classes::System::Collections::Generic::HashSet_1_Moon_Entity_ {
    IL2CPP_REGISTER_METHOD(0x02ABEAC0, bool, Contains, app::HashSet_1_Moon_Entity_* this_ptr, app::Entity* item)
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, app::HashSet_1_Moon_Entity_* this_ptr, app::Entity* item)
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, app::HashSet_1_Moon_Entity_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, app::HashSet_1_Moon_Entity_* this_ptr)
} // namespace app::classes::System::Collections::Generic::HashSet_1_Moon_Entity_
