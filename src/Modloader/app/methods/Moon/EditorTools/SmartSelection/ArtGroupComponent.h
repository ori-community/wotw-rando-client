#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ArtGroupComponent.h>

namespace app::classes::Moon::EditorTools::SmartSelection::ArtGroupComponent {
    IL2CPP_REGISTER_METHOD(0x003FFDF0, bool, DoStrip, app::ArtGroupComponent* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::ArtGroupComponent* this_ptr)
} // namespace app::classes::Moon::EditorTools::SmartSelection::ArtGroupComponent
