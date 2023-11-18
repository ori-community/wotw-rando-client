#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/JSONNode_NodeType__Enum.h>
#include <Modloader/app/structs/List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::JSONNode {
    IL2CPP_REGISTER_METHOD(0x01DE23D0, app::JSONNode*, Parse, (app::String * json))
    IL2CPP_REGISTER_METHOD(0x01DE25D0, void, ctor_1, (app::JSONNode * this_ptr, app::JSONNode_NodeType__Enum type))
    IL2CPP_REGISTER_METHOD(0x01DE2830, void, ctor_2, (app::JSONNode * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x01DE2840, void, ctor_3, (app::JSONNode * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x01DE2850, void, ctor_4, (app::JSONNode * this_ptr, app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_* value))
    IL2CPP_REGISTER_METHOD(0x01DE2860, void, ctor_5, (app::JSONNode * this_ptr, app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_* value))
    IL2CPP_REGISTER_METHOD(0x01DE2870, void, ctor_6, (app::JSONNode * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::JSONNode_NodeType__Enum, get_Type, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01B67070, bool, get_IsValid, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE2880, app::JSONNode*, Check, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE2930, app::String*, op_Implicit_1, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE2960, app::JSONNode*, op_Implicit_2, (app::String * v))
    IL2CPP_REGISTER_METHOD(0x01DE2AB0, int32_t, op_Implicit_3, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE2AE0, app::JSONNode*, op_Implicit_4, (int32_t v))
    IL2CPP_REGISTER_METHOD(0x01DE2C30, float, op_Implicit_5, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE2C60, app::JSONNode*, op_Implicit_6, (float v))
    IL2CPP_REGISTER_METHOD(0x01DE2DC0, double, op_Implicit_7, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE2DF0, app::JSONNode*, op_Implicit_8, (double v))
    IL2CPP_REGISTER_METHOD(0x01DE2F40, app::JSONNode*, get_Item_1, (app::JSONNode * this_ptr, app::String* k))
    IL2CPP_REGISTER_METHOD(0x01DE3070, void, set_Item_1, (app::JSONNode * this_ptr, app::String* k, app::JSONNode* value))
    IL2CPP_REGISTER_METHOD(0x01DE31A0, app::Dictionary_2_System_String_ZenFulcrum_EmbeddedBrowser_JSONNode_*, op_Implicit_9, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE31D0, app::JSONNode*, get_Item_2, (app::JSONNode * this_ptr, int32_t idx))
    IL2CPP_REGISTER_METHOD(0x01DE32D0, void, set_Item_2, (app::JSONNode * this_ptr, int32_t idx, app::JSONNode* value))
    IL2CPP_REGISTER_METHOD(0x01DE3490, app::List_1_ZenFulcrum_EmbeddedBrowser_JSONNode_*, op_Implicit_10, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE34C0, void, Add, (app::JSONNode * this_ptr, app::JSONNode* item))
    IL2CPP_REGISTER_METHOD(0x01DE3590, int32_t, get_Count, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE3650, bool, get_IsNull, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE3660, bool, op_Implicit_11, (app::JSONNode * n))
    IL2CPP_REGISTER_METHOD(0x01DE3690, app::JSONNode*, op_Implicit_12, (bool v))
    IL2CPP_REGISTER_METHOD(0x01DE37E0, app::Object*, get_Value, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE3930, app::String*, get_AsJSON, (app::JSONNode * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE39D0, void, cctor, ())
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::JSONNode
