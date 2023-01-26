#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObjec_Lis_1_UnityEngin_GameObjec_.h>
#include <Modloader/app/structs/Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/List_1_UnityEngine_GameObject_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__ {
    IL2CPP_REGISTER_METHOD(0x02BA5400, app::Dictionary_2_TKey_TValue_Enumerator_UnityEngine_GameObject_List_1_UnityEngine_GameObject_, GetEnumerator, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* key, app::List_1_UnityEngine_GameObject_** value))
    IL2CPP_REGISTER_METHOD(0x02BAC170, void, Add, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr, app::GameObject* key, app::List_1_UnityEngine_GameObject_* value))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_UnityEngine_GameObject_List_1_UnityEngine_GameObject_*, get_Values, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_UnityEngine_GameObject_List_1_UnityEngine_GameObject__
