#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::EntryPointNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01A10CC0, void, ctor_1, (app::EntryPointNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A10D50, void, ctor_2, (app::EntryPointNotFoundException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FB70, void, ctor_3, (app::EntryPointNotFoundException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
