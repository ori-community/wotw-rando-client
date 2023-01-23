#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478CE20, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::String* key, app::JSONNode** value))
    IL2CPP_REGISTER_METHODINFO(0x0470AB00, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode__TryGetValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHODINFO(0x047184B8, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode__Remove__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::String* key, app::JSONNode* value))
    IL2CPP_REGISTER_METHODINFO(0x04768990, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04764BD8, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode__get_Count__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_*, get_Keys, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04706A00, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode__get_Keys__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_*, get_Values, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0476D0B8, Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode__get_Values__MethodInfo)
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_
