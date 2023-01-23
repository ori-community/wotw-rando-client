#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/UberStateArchive.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::UberStateArchive {
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_CaretPosition, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03148C40, void, ctor, (app::UberStateArchive * this_ptr, app::Byte__Array* data, bool writing))
    IL2CPP_REGISTER_METHOD(0x03148C50, uint8_t, Serialize_1, (app::UberStateArchive * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x03148CD0, float, Serialize_2, (app::UberStateArchive * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x03148D40, int16_t, Serialize_3, (app::UberStateArchive * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x03148DC0, uint16_t, Serialize_4, (app::UberStateArchive * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x03148DF0, int32_t, Serialize_5, (app::UberStateArchive * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x03148E40, bool, Serialize_6, (app::UberStateArchive * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x03148EC0, app::Vector2, Serialize_7, (app::UberStateArchive * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x03148F90, app::Vector3, Serialize_8, (app::UberStateArchive * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x031490E0, app::Quaternion, Serialize_9, (app::UberStateArchive * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x03149270, void, WriteBool, (app::UberStateArchive * this_ptr, bool v))
    IL2CPP_REGISTER_METHOD(0x03149270, void, WriteByte, (app::UberStateArchive * this_ptr, uint8_t v))
    IL2CPP_REGISTER_METHOD(0x031492B0, void, WriteUInt16, (app::UberStateArchive * this_ptr, uint16_t v))
    IL2CPP_REGISTER_METHOD(0x03149310, void, WriteUInt32, (app::UberStateArchive * this_ptr, uint32_t v))
    IL2CPP_REGISTER_METHOD(0x031492B0, void, WriteInt16, (app::UberStateArchive * this_ptr, int16_t v))
    IL2CPP_REGISTER_METHOD(0x03149310, void, WriteInt32, (app::UberStateArchive * this_ptr, int32_t v))
    IL2CPP_REGISTER_METHOD(0x03149340, void, WriteFloat, (app::UberStateArchive * this_ptr, float v))
    IL2CPP_REGISTER_METHOD(0x03149370, uint8_t, ReadByte, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031493C0, bool, ReadBool, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03149410, uint16_t, ReadUInt16, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03149490, uint32_t, ReadUInt32, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031494C0, int16_t, ReadInt16, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x03149490, int32_t, ReadInt32, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x031494D0, float, ReadFloat, (app::UberStateArchive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, AssertCaretPosition, (app::UberStateArchive * this_ptr, int64_t start, int64_t expected_delta, uint16_t id))
} // namespace app::classes::UberStateArchive
