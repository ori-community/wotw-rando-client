#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AVProWindowsMediaMovieClip.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::AVProWindowsMediaMovieClip {
    IL2CPP_REGISTER_METHOD(0x01DF8C80, void, ctor, app::AVProWindowsMediaMovieClip* this_ptr, app::String* name, int32_t in_point, int32_t out_point)
}
