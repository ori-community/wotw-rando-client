#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::classes::AVProWindowsMediaMovieFromResource {
    IL2CPP_REGISTER_METHOD(0x0312F8D0, void, Start, (app::AVProWindowsMediaMovieFromResource * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047803D8, AVProWindowsMediaMovieFromResource_Start__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x0312F9D0, bool, LoadMovie, (app::AVProWindowsMediaMovieFromResource * this_ptr, bool auto_play))
    IL2CPP_REGISTER_METHOD(0x0312F9E0, bool, LoadMovieFromResource, (app::AVProWindowsMediaMovieFromResource * this_ptr, bool auto_play, app::String* path))
    IL2CPP_REGISTER_METHOD(0x0312FD50, void, UnloadMovie, (app::AVProWindowsMediaMovieFromResource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0312FEA0, void, UnloadResource, (app::AVProWindowsMediaMovieFromResource * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0057BBE0, void, ctor, (app::AVProWindowsMediaMovieFromResource * this_ptr))
} // namespace app::classes::AVProWindowsMediaMovieFromResource
