#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/EntityPlaceholderScalingData.h>
#include <Modloader/app/structs/ScreenshotIcon_EnemyType__Enum.h>
#include <Modloader/app/structs/Texture.h>
#include <Modloader/app/structs/ZoneScalingData.h>

namespace app::classes::ZoneScalingData {
    IL2CPP_REGISTER_METHOD(0x00F59020, app::Texture*, get_DisplayTexture, app::ZoneScalingData* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00F59150, int32_t, GetMonsterDifficulty_1, app::ZoneScalingData* this_ptr, app::EntityPlaceholderScalingData* enemy)
    IL2CPP_REGISTER_METHOD(
        0x00F592B0,
        bool,
        GetMonsterDifficulty_2,
        app::ZoneScalingData* this_ptr,
        app::ScreenshotIcon_EnemyType__Enum enemy_icon,
        int32_t* difficulty
    )
    IL2CPP_REGISTER_METHOD(0x00F59430, void, ctor, app::ZoneScalingData* this_ptr)
} // namespace app::classes::ZoneScalingData
