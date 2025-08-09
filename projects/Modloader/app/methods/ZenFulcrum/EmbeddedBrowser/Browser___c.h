#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Browser.h>
#include <Modloader/app/structs/Browser_c.h>
#include <Modloader/app/structs/JSONNode.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Texture2D.h>

namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser___c {
    IL2CPP_REGISTER_METHOD(0x01C6FC80, void, cctor, )
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, app::Browser_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_0, app::Browser_c* this_ptr, app::String* s, app::String* s1)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_1, app::Browser_c* this_ptr, app::Texture2D* t)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_2, app::Browser_c* this_ptr, app::JSONNode* load_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_3, app::Browser_c* this_ptr, app::JSONNode* load_data)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_4, app::Browser_c* this_ptr, app::JSONNode* err_code)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_5, app::Browser_c* this_ptr, app::JSONNode* err_info)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_6, app::Browser_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_7, app::Browser_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_8, app::Browser_c* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_9, app::Browser_c* this_ptr, int32_t download_id, app::JSONNode* info)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_10, app::Browser_c* this_ptr, app::String* tag_name, bool editable, app::String* value)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __ctor_b__179_11, app::Browser_c* this_ptr, bool mouse_focused, bool keyboard_focused)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__180_0, app::Browser_c* this_ptr, app::Browser* browser)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, __cctor_b__180_1, app::Browser_c* this_ptr, app::Browser* browser)
} // namespace app::classes::ZenFulcrum::EmbeddedBrowser::Browser___c
