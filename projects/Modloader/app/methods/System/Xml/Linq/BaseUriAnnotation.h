#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BaseUriAnnotation.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Linq::BaseUriAnnotation {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::BaseUriAnnotation * this_ptr, app::String* base_uri))
}
