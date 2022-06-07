#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::System::IO::DriveNotFoundException {
    IL2CPP_REGISTER_METHOD(0x01E05130, void, ctor_1, (app::DriveNotFoundException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E05110, void, ctor_2, (app::DriveNotFoundException * this_ptr, app::String * message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::DriveNotFoundException * this_ptr, app::SerializationInfo * info, app::StreamingContext context))
}
