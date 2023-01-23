#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/RecorderFrame_FrameDataTypes__Enum.h>
#include <Modloader/app/structs/AbilitiesData.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/FieldInfo_1.h>

namespace app::classes::AbilitiesData {
    IL2CPP_REGISTER_METHOD(0x004AB2B0, app::RecorderFrame_FrameDataTypes__Enum, FrameType, (app::AbilitiesData * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004AB2C0, void, Save, (app::AbilitiesData * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x004AB520, void, Load, (app::AbilitiesData * this_ptr, app::BinaryReader* binary_reader, int32_t current_version))
    IL2CPP_REGISTER_METHOD(0x004AB680, void, Record, (app::BinaryWriter * binary_writer, app::Object* obj, app::FieldInfo_1* field_info))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor, (app::AbilitiesData * this_ptr))
} // namespace app::classes::AbilitiesData
