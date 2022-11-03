#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::System::Runtime::CompilerServices::InternalsVisibleToAttribute {
    IL2CPP_REGISTER_METHOD(0x00BA6CF0, void, ctor, (app::InternalsVisibleToAttribute * this_ptr, app::String* assembly_name))
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_AssemblyName, (app::InternalsVisibleToAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0052A280, bool, get_AllInternalsVisible, (app::InternalsVisibleToAttribute * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00533150, void, set_AllInternalsVisible, (app::InternalsVisibleToAttribute * this_ptr, bool value))
} // namespace app::classes::System::Runtime::CompilerServices::InternalsVisibleToAttribute
