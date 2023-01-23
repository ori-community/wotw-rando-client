#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_Moon_Entity_Damage_.h>
#include <Modloader/app/structs/Entity.h>
#include <Modloader/app/structs/Damage.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Entity_Damage_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_Moon_Entity_Damage_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0470C970, Dictionary_2_Moon_Entity_Damage___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_Moon_Entity_Damage_ * this_ptr, app::Entity* key, app::Damage** value))
    IL2CPP_REGISTER_METHODINFO(0x04756150, Dictionary_2_Moon_Entity_Damage__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_Moon_Entity_Damage_ * this_ptr, app::Entity* key, app::Damage* value))
    IL2CPP_REGISTER_METHODINFO(0x0477B040, Dictionary_2_Moon_Entity_Damage__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_Moon_Entity_Damage_
