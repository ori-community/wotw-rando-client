#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_Type_List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/List_1_UnityEngine_Component_.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_List_1_UnityEngine_Component__ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_Type_List_1_UnityEngine_Component_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_System_Type_List_1_UnityEngine_Component_ * this_ptr, app::Type* key, app::List_1_UnityEngine_Component_* value))
    IL2CPP_REGISTER_METHOD(0x02BA5090, bool, ContainsKey, (app::Dictionary_2_System_Type_List_1_UnityEngine_Component_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHOD(0x02BD24D0, app::List_1_UnityEngine_Component_*, get_Item, (app::Dictionary_2_System_Type_List_1_UnityEngine_Component_ * this_ptr, app::Type* key))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_Type_List_1_UnityEngine_Component_ * this_ptr, app::Type* key, app::List_1_UnityEngine_Component_** value))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_Type_List_1_UnityEngine_Component__
