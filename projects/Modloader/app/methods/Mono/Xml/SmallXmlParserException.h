#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SmallXmlParserException.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Mono::Xml::SmallXmlParserException {
    IL2CPP_REGISTER_METHOD(0x0228AA60, void, ctor, (app::SmallXmlParserException * this_ptr, app::String* msg, int32_t line, int32_t column))
}
