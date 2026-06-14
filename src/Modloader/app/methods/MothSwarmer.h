#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/MothEnemy.h>
#include <Modloader/app/structs/MothSwarm.h>
#include <Modloader/app/structs/MothSwarmer.h>
#include <Modloader/app/structs/UberSwarmerSettings.h>
#include <Modloader/app/structs/Vector2.h>

namespace app::classes::MothSwarmer {
    IL2CPP_REGISTER_METHOD(0x00866A40, app::Vector2, get_Position, app::MothSwarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00866B50, void, set_Position, app::MothSwarmer* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00866C70, app::Vector2, get_Velocity, app::MothSwarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00866D80, void, set_Velocity, app::MothSwarmer* this_ptr, app::Vector2 value)
    IL2CPP_REGISTER_METHOD(0x00866EB0, bool, get_IsActive, app::MothSwarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::UberSwarmerSettings*, get_Settings, app::MothSwarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA490, void, set_Settings, app::MothSwarmer* this_ptr, app::UberSwarmerSettings* value)
    IL2CPP_REGISTER_METHOD(0x00866F70, app::MothSwarm*, get_Swarm, app::MothSwarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FBBC0, app::MothEnemy*, get_Enemy, app::MothSwarmer* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00867030, void, ctor, app::MothSwarmer* this_ptr, app::MothEnemy* moth_enemy)
    IL2CPP_REGISTER_METHOD(0x008671F0, app::Vector2, CalculateExtraVelocities, app::MothSwarmer* this_ptr)
} // namespace app::classes::MothSwarmer
