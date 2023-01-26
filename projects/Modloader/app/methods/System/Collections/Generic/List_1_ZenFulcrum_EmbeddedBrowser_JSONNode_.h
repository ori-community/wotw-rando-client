#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/JSONNode.h>

namespace app::classes::System::Collections::Generic::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ {
    IL2CPP_REGISTER_METHOD(0x025E8100, void, ctor, (app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x025EFC50, app::JSONNode*, get_Item, (app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x025F1690, void, RemoveAt, (app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, int32_t index))
    IL2CPP_REGISTER_METHOD(0x02F1E150, void, Add, (app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, app::JSONNode* item))
    IL2CPP_REGISTER_METHOD(0x025EFC80, void, set_Item, (app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_ * this_ptr, int32_t index, app::JSONNode* value))
} // namespace app::classes::System::Collections::Generic::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_
