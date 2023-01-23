#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/ArtKitLink.h>

namespace app::classes::Moon::EditorTools::ArtKit::ArtKitLink {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, (app::ArtKitLink * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01207AE0, void, ctor, (app::ArtKitLink * this_ptr))
} // namespace app::classes::Moon::EditorTools::ArtKit::ArtKitLink
