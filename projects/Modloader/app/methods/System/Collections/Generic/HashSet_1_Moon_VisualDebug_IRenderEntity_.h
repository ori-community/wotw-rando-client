#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/HashSet_1_Moon_VisualDebug_IRenderEntity_.h>
#include <Modloader/app/structs/HashSet_1_T_Enumerator_Moon_VisualDebug_IRenderEntity_.h>
#include <Modloader/app/structs/IRenderEntity.h>

namespace app::classes::System::Collections::Generic::HashSet_1_Moon_VisualDebug_IRenderEntity_ {
    IL2CPP_REGISTER_METHOD(0x002FD1D0, int32_t, get_Count, (app::HashSet_1_Moon_VisualDebug_IRenderEntity_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A60, bool, Add, (app::HashSet_1_Moon_VisualDebug_IRenderEntity_ * this_ptr, app::IRenderEntity* item))
    IL2CPP_REGISTER_METHOD(0x02ABCD80, app::HashSet_1_T_Enumerator_Moon_VisualDebug_IRenderEntity_, GetEnumerator, (app::HashSet_1_Moon_VisualDebug_IRenderEntity_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4A90, void, Clear, (app::HashSet_1_Moon_VisualDebug_IRenderEntity_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02AB4370, void, ctor, (app::HashSet_1_Moon_VisualDebug_IRenderEntity_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::HashSet_1_Moon_VisualDebug_IRenderEntity_
