#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArtKit.h>

namespace app::classes::Moon::EditorTools::ArtKit::ArtKit {
    IL2CPP_REGISTER_METHOD(0x01207740, void, AddVersionInfo, (app::ArtKit * this_ptr, int32_t version_number, int64_t timestamp))
    IL2CPP_REGISTER_METHOD(0x012078C0, int32_t, get_CurrentVersion, (app::ArtKit * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01207980, void, ctor, (app::ArtKit * this_ptr))
} // namespace app::classes::Moon::EditorTools::ArtKit::ArtKit
