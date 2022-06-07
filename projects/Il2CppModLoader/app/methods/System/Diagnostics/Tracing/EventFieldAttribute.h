#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::Diagnostics::Tracing::EventFieldAttribute {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, app::EventFieldTags__Enum, get_Tags, (app::EventFieldAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String *, get_Name, (app::EventFieldAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FD1D0, app::EventFieldFormat__Enum, get_Format, (app::EventFieldAttribute * this_ptr))
}
