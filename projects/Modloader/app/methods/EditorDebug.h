#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EditorDebug.h>
#include <Modloader/app/structs/StreamWriter.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::EditorDebug {
    IL2CPP_REGISTER_METHOD(0x00BF7080, void, ctor, (app::EditorDebug * this_ptr, app::String* name))
    IL2CPP_REGISTER_METHOD(0x00BF7170, void, Log, (app::EditorDebug * this_ptr, app::String* log))
    IL2CPP_REGISTER_METHOD(0x00BF7320, app::StreamWriter*, getStream, (app::EditorDebug * this_ptr, app::String* filepath))
    IL2CPP_REGISTER_METHOD(0x00BF75A0, void, cctor, ())
} // namespace app::classes::EditorDebug
