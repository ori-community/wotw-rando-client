#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Configuration::DictionarySectionHandler {
    IL2CPP_REGISTER_METHOD(0x02961A80, void, ctor, (app::DictionarySectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04747C00, DictionarySectionHandler__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961AB0, app::String *, get_KeyAttributeName, (app::DictionarySectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04700A10, DictionarySectionHandler_get_KeyAttributeName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961AE0, app::String *, get_ValueAttributeName, (app::DictionarySectionHandler * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04732F10, DictionarySectionHandler_get_ValueAttributeName__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961B10, app::Object *, Create, (app::DictionarySectionHandler * this_ptr, app::Object * parent, app::Object * context, app::XmlNode * section))
    IL2CPP_REGISTER_METHODINFO(0x04720988, DictionarySectionHandler_Create__MethodInfo)
}
