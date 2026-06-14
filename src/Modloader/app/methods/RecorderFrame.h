#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AnalogueInputData.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/CameraData.h>
#include <Modloader/app/structs/CharacterData.h>
#include <Modloader/app/structs/CheckpointData.h>
#include <Modloader/app/structs/CursorInputData.h>
#include <Modloader/app/structs/DeathsData.h>
#include <Modloader/app/structs/EntityData.h>
#include <Modloader/app/structs/InputData.h>
#include <Modloader/app/structs/List_1_AbilitiesData_.h>
#include <Modloader/app/structs/List_1_BuildData_.h>
#include <Modloader/app/structs/List_1_CharacterData_.h>
#include <Modloader/app/structs/List_1_CheckpointData_.h>
#include <Modloader/app/structs/List_1_InputData_.h>
#include <Modloader/app/structs/List_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/RecorderFrame.h>

namespace app::classes::RecorderFrame {
    IL2CPP_REGISTER_METHOD(0x008EFBB0, void, SaveToFile, app::RecorderFrame* this_ptr, app::BinaryWriter* binary_writer)
    IL2CPP_REGISTER_METHOD(0x008EFE50, void, LoadFromFile, app::RecorderFrame* this_ptr, app::BinaryReader* binary_reader, int32_t current_version)
    IL2CPP_REGISTER_METHOD(0x008F0E20, void, ctor, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::Object*, GetFrameDataOfType_1, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, app::List_1_System_Object_*, GetFrameData_1, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::CharacterData*, GetFrameDataOfType_2, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::CameraData*, GetFrameDataOfType_3, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::CheckpointData*, GetFrameDataOfType_4, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::InputData*, GetFrameDataOfType_5, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::AnalogueInputData*, GetFrameDataOfType_6, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::DeathsData*, GetFrameDataOfType_7, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::EntityData*, GetFrameDataOfType_8, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x016AA910, app::CursorInputData*, GetFrameDataOfType_9, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, app::List_1_CharacterData_*, GetFrameData_2, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, app::List_1_BuildData_*, GetFrameData_3, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, app::List_1_CheckpointData_*, GetFrameData_4, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, app::List_1_AbilitiesData_*, GetFrameData_5, app::RecorderFrame* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01EB9AE0, app::List_1_InputData_*, GetFrameData_6, app::RecorderFrame* this_ptr)
} // namespace app::classes::RecorderFrame
