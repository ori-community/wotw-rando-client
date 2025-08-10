#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SkillTreeInfoPanelTextLayout.h>

namespace app::classes::SkillTreeInfoPanelTextLayout {
    IL2CPP_REGISTER_METHOD(0x006B5550, void, FixedUpdate, app::SkillTreeInfoPanelTextLayout* this_ptr)
    IL2CPP_REGISTER_METHOD(0x003F8A60, void, ctor, app::SkillTreeInfoPanelTextLayout* this_ptr)
} // namespace app::classes::SkillTreeInfoPanelTextLayout
