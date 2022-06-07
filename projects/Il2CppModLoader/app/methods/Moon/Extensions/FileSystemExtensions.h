#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::Moon::Extensions::FileSystemExtensions {
    IL2CPP_REGISTER_METHOD(0x031B59C0, void, CopyFolder, (app::String * source_dir, app::String * dest_dir))
}
