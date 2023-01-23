#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/GhostPlayer.h>
#include <Modloader/app/structs/GhostRecordingMetaDataData.h>
#include <Modloader/app/structs/OriGhostRigVisuals_GhostVisualSettings.h>
#include <Modloader/app/structs/IGhostRecorderPlugin.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/SuspendableMask__Enum.h>
#include <Modloader/app/structs/CharacterStatePuppet.h>
#include <Modloader/app/structs/RecordableObjectPuppet.h>
#include <Modloader/app/structs/IGhostFrameData.h>
#include <Modloader/app/structs/GhostFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/GhostCharacterData.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Transform.h>
#include <Modloader/app/structs/CharacterAnimationSystem.h>
#include <Modloader/app/structs/MoonAnimator.h>
#include <Modloader/app/structs/SoundHost.h>
#include <Modloader/app/structs/AbilityType__Enum.h>
#include <Modloader/app/structs/CharacterState.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/GhostGenericEventsPlugin.h>
#include <Modloader/app/structs/GhostCharacterPlugin.h>

namespace app::classes::GhostPlayer {
    IL2CPP_REGISTER_METHOD(0x002FBC40, app::String*, get_GhostReplay, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC50, void, set_GhostReplay, (app::GhostPlayer * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00601090, bool, get_IsFinished, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0041DB70, void, set_IsFinished, (app::GhostPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x007DBE90, app::GhostRecordingMetaDataData*, get_MetaData, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DC000, void, OnEnable, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DC540, void, OnDisable, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DC760, void, ResetStatics, ())
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolSpawned, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, OnPoolDespawned, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DC800, void, InitializeVisualize, (app::GhostPlayer * this_ptr, app::OriGhostRigVisuals_GhostVisualSettings* visual_settings))
    IL2CPP_REGISTER_METHOD(0x007DCC80, void, ExtractMeta, (app::GhostRecordingMetaDataData * meta, app::String* ghost_data, app::String* file_path))
    IL2CPP_REGISTER_METHOD(0x007DD4B0, void, ExtractMetaData, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DD580, void, Run, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DDAD0, void, InitializePuppetPrefabs, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DDDC0, void, Stop, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DE1C0, void, RegisterPlugin, (app::GhostPlayer * this_ptr, app::IGhostRecorderPlugin* plugin))
    IL2CPP_REGISTER_METHOD(0x007DE280, void, DeregisterPlugin, (app::GhostPlayer * this_ptr, app::IGhostRecorderPlugin* plugin))
    IL2CPP_REGISTER_METHOD(0x007DE340, void, FixedUpdate, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00736690, void, SetPosition, (app::GhostPlayer * this_ptr, app::Vector3 position))
    IL2CPP_REGISTER_METHOD(0x007DE6E0, void, SetDisplayName, (app::GhostPlayer * this_ptr, app::String* display_name))
    IL2CPP_REGISTER_METHOD(0x007DE870, bool, get_IsSuspended, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DE880, void, set_IsSuspended, (app::GhostPlayer * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x006B90B0, app::SuspendableMask__Enum, get_Mask, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DE890, void, set_Mask, (app::GhostPlayer * this_ptr, app::SuspendableMask__Enum value))
    IL2CPP_REGISTER_METHOD(0x007DE950, app::CharacterStatePuppet*, GetPuppet, (app::GhostPlayer * this_ptr, int32_t id))
    IL2CPP_REGISTER_METHOD(0x007DEA50, app::RecordableObjectPuppet*, CreateRecordableObjectPuppet, (app::GhostPlayer * this_ptr, int32_t id, int32_t recording_id))
    IL2CPP_REGISTER_METHOD(0x007DEC20, void, DestroyRecordableObjectPuppet, (app::GhostPlayer * this_ptr, app::RecordableObjectPuppet* puppet))
    IL2CPP_REGISTER_METHOD(0x007DED50, app::IGhostFrameData*, GetFrameDataFast, (app::GhostPlayer * this_ptr, int32_t frame, app::GhostFrame_FrameDataTypes__Enum typ))
    IL2CPP_REGISTER_METHOD(0x007DEE70, app::GhostCharacterData*, get_CurrentGhostCharacterData, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DEF20, void, ResetGhostCharacterData, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DEF30, app::Vector3, get_Position, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DF030, bool, get_FaceLeft, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DF070, float, get_FeetAngle, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DF0B0, app::Vector2, get_LocalSpeed, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00506170, app::Transform*, get_Transform, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00418200, app::CharacterAnimationSystem*, get_Animation, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0049F2B0, app::MoonAnimator*, get_Animator, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0065FBE0, app::SoundHost*, get_SoundHost, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x007DF180, bool, HasAbility, (app::GhostPlayer * this_ptr, app::AbilityType__Enum ability_type))
    IL2CPP_REGISTER_METHOD(0x007DF1A0, bool, IsStatePerforming, (app::GhostPlayer * this_ptr, app::CharacterState* state))
    IL2CPP_REGISTER_METHOD(0x007DF1D0, void, ctor, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, cctor, ())
    IL2CPP_REGISTER_METHOD(0x015EA340, app::Object*, GetPlugin_1, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHOD(0x015EA250, app::Object*, GetFrameData, (app::GhostPlayer * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x01EB8750, app::List_1_System_Object_*, GetFrameDatas, (app::GhostPlayer * this_ptr, int32_t frame))
    IL2CPP_REGISTER_METHOD(0x015EA340, app::GhostGenericEventsPlugin*, GetPlugin_2, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04768970, GhostPlayer_GetPlugin_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x015EA340, app::GhostCharacterPlugin*, GetPlugin_3, (app::GhostPlayer * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047434C8, GhostPlayer_GetPlugin_2__MethodInfo)
} // namespace app::classes::GhostPlayer
