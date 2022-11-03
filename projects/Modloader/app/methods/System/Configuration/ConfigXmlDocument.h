#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Configuration::ConfigXmlDocument {
    IL2CPP_REGISTER_METHOD(0x02961630, void, ctor, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0475EF08, ConfigXmlDocument__ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961660, app::String*, get_Filename, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0478B340, ConfigXmlDocument_get_Filename__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961690, int32_t, get_LineNumber, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047505F0, ConfigXmlDocument_get_LineNumber__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029616C0, app::String*, IConfigErrorInfo_get_Filename, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047178C8, ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_Filename__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x029616F0, int32_t, IConfigErrorInfo_get_LineNumber, (app::ConfigXmlDocument * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477A750, ConfigXmlDocument_System_Configuration_Internal_IConfigErrorInfo_get_LineNumber__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x02961720, void, LoadSingleElement, (app::ConfigXmlDocument * this_ptr, app::String* filename, app::XmlTextReader* source_reader))
    IL2CPP_REGISTER_METHODINFO(0x0477D900, ConfigXmlDocument_LoadSingleElement__MethodInfo)
} // namespace app::classes::System::Configuration::ConfigXmlDocument
