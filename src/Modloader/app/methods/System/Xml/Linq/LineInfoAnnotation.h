#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/LineInfoAnnotation.h>

namespace app::classes::System::Xml::Linq::LineInfoAnnotation {
    IL2CPP_REGISTER_METHOD(0x01857090, void, ctor, app::LineInfoAnnotation* this_ptr, int32_t line_number, int32_t line_position)
}
