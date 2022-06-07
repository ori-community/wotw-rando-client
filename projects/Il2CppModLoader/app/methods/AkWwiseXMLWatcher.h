#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkWwiseXMLWatcher {
    IL2CPP_REGISTER_METHOD(0x027081D0, void, add_XMLUpdated, (app::AkWwiseXMLWatcher * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x027082C0, void, remove_XMLUpdated, (app::AkWwiseXMLWatcher * this_ptr, app::Action * value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AkWwiseXMLWatcher * this_ptr))
    IL2CPP_REGISTER_METHOD(0x027083B0, void, cctor, ())
}
