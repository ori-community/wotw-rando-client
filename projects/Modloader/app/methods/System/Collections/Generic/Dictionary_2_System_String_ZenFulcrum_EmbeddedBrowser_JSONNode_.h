#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNod_.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    IL2CPP_REGISTER_METHOD(0x0283AC20, void, ctor, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02BBA760, bool, TryGetValue, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::String* key, app::JSONNode** value))
    IL2CPP_REGISTER_METHOD(0x02BD3EC0, bool, Remove, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::String* key))
    IL2CPP_REGISTER_METHOD(0x02BAC140, void, set_Item, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::String* key, app::JSONNode* value))
    IL2CPP_REGISTER_METHOD(0x0283B2A0, int32_t, get_Count, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B2B0, app::Dictionary_2_TKey_TValue_KeyCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_*, get_Keys, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0283B3E0, app::Dictionary_2_TKey_TValue_ValueCollection_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_*, get_Values, (app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
} // namespace app::classes::System::Collections::Generic::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_
