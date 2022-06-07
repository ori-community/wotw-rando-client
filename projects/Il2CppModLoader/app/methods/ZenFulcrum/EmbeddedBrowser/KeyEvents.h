#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::ZenFulcrum::EmbeddedBrowser::KeyEvents {
    IL2CPP_REGISTER_METHOD(0x002FB930, app::List_1_UnityEngine_Event_ *, get_Events, (app::KeyEvents * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE6FF0, void, InputUpdate, (app::KeyEvents * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE74E0, void, Feed, (app::KeyEvents * this_ptr, app::Event * ev))
    IL2CPP_REGISTER_METHOD(0x01DE7700, void, Press, (app::KeyEvents * this_ptr, app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x01DE7940, void, Release, (app::KeyEvents * this_ptr, app::KeyCode__Enum key))
    IL2CPP_REGISTER_METHOD(0x01DE7B80, void, Type, (app::KeyEvents * this_ptr, app::String * text))
    IL2CPP_REGISTER_METHOD(0x01DE7E60, void, ctor, (app::KeyEvents * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DE8080, void, cctor, ())
}
