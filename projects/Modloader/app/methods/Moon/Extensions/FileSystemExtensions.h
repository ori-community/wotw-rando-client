#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>

namespace app::classes::Moon::Extensions::FileSystemExtensions {
    IL2CPP_REGISTER_METHOD(0x031B59C0, void, CopyFolder, app::String* source_dir, app::String* dest_dir)
}
