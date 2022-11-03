#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::TextAnimDistortModifier {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, RequiresNormals, (app::TextAnimDistortModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E3360, void, SetProperties, (app::TextAnimDistortModifier * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010E3450, void, ctor, (app::TextAnimDistortModifier * this_ptr))
} // namespace app::classes::TextAnimDistortModifier
