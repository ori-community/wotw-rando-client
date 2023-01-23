#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_Type_Moon_IDrivableGroup_.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/IDrivableGroup.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Moon_IDrivableGroup_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_Moon_IDrivableGroup_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047831E8, Dictionary_2_System_Type_Moon_IDrivableGroup___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Type_Moon_IDrivableGroup_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x04742B08, Dictionary_2_System_Type_Moon_IDrivableGroup__ContainsKey__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::IDrivableGroup*, get_Item, (app::Dictionary_2_System_Type_Moon_IDrivableGroup_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x04777948, Dictionary_2_System_Type_Moon_IDrivableGroup__get_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_Type_Moon_IDrivableGroup_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHODINFO(0x047919D0, Dictionary_2_System_Type_Moon_IDrivableGroup__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_Moon_IDrivableGroup_ * this_ptr, app::Type* key, app::IDrivableGroup* value))
    IL2CPP_REGISTER_METHODINFO(0x04772208, Dictionary_2_System_Type_Moon_IDrivableGroup__Add__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_Moon_IDrivableGroup_
