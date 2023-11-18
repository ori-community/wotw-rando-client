#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/GameObject.h>
#include <Modloader/app/structs/TimelineCharacterPreviewManager_CharacterPreviewInstance.h>

namespace app::classes::TimelineCharacterPreviewManager_CharacterPreviewInstance {
    IL2CPP_REGISTER_METHOD(0x010F6290, app::Transform*, get_Transform, (app::TimelineCharacterPreviewManager_CharacterPreviewInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F62F0, bool, get_Valid, (app::TimelineCharacterPreviewManager_CharacterPreviewInstance * this_ptr))
    IL2CPP_REGISTER_METHOD(0x010F6390, void, Populate, (app::TimelineCharacterPreviewManager_CharacterPreviewInstance * this_ptr, app::GameObject* instance))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::TimelineCharacterPreviewManager_CharacterPreviewInstance * this_ptr))
} // namespace app::classes::TimelineCharacterPreviewManager_CharacterPreviewInstance
