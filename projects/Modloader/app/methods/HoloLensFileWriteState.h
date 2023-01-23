#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/FileStream.h>
#include <Modloader/app/structs/HoloLensFileWriteState.h>

namespace app::classes::HoloLensFileWriteState {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::FileStream*, get_Stream, (app::HoloLensFileWriteState * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Stream, (app::HoloLensFileWriteState * this_ptr, app::FileStream* value))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::HoloLensFileWriteState * this_ptr, app::FileStream* file_stream))
} // namespace app::classes::HoloLensFileWriteState
