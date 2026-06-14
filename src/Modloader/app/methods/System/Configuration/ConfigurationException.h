#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ConfigurationException.h>
#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNode.h>

namespace app::classes::System::Configuration::ConfigurationException {
    IL2CPP_REGISTER_METHOD(0x02961750, void, ctor_1, app::ConfigurationException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961780, void, ctor_2, app::ConfigurationException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
    IL2CPP_REGISTER_METHOD(0x029617B0, void, ctor_3, app::ConfigurationException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x029617E0, void, ctor_4, app::ConfigurationException* this_ptr, app::String* message, app::Exception* inner)
    IL2CPP_REGISTER_METHOD(
        0x02961810,
        void,
        ctor_5,
        app::ConfigurationException* this_ptr,
        app::String* message,
        app::Exception* inner,
        app::String* filename,
        int32_t line
    )
    IL2CPP_REGISTER_METHOD(0x02961840, void, ctor_6, app::ConfigurationException* this_ptr, app::String* message, app::Exception* inner, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x02961870, void, ctor_7, app::ConfigurationException* this_ptr, app::String* message, app::String* filename, int32_t line)
    IL2CPP_REGISTER_METHOD(0x029618A0, void, ctor_8, app::ConfigurationException* this_ptr, app::String* message, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x029618D0, app::String*, get_BareMessage, app::ConfigurationException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961900, app::String*, get_Filename, app::ConfigurationException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961930, int32_t, get_Line, app::ConfigurationException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02961960, app::String*, GetXmlNodeFilename, app::XmlNode* node)
    IL2CPP_REGISTER_METHOD(0x02961990, int32_t, GetXmlNodeLineNumber, app::XmlNode* node)
} // namespace app::classes::System::Configuration::ConfigurationException
