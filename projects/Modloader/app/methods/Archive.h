#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/MemoryStream.h>
#include <Modloader/app/structs/Archive.h>
#include <Modloader/app/structs/BinaryWriter.h>
#include <Modloader/app/structs/BinaryReader.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/Vector2.h>
#include <Modloader/app/structs/Vector3.h>
#include <Modloader/app/structs/Quaternion.h>

namespace app::classes::Archive {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::MemoryStream*, get_MemoryStream, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005082A0, void, set_MemoryStream, (app::Archive * this_ptr, app::MemoryStream* value))
    IL2CPP_REGISTER_METHOD(0x00508510, void, ctor, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00508730, void, WriteMemoryStreamToBinaryWriter, (app::Archive * this_ptr, app::BinaryWriter* binary_writer))
    IL2CPP_REGISTER_METHOD(0x005087D0, void, ReadMemoryStreamFromBinaryReader, (app::Archive * this_ptr, app::BinaryReader* binary_reader))
    IL2CPP_REGISTER_METHOD(0x00508880, bool, get_Reading, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x004F4CE0, bool, get_Writing, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00508890, void, ResetStream, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x005088C0, void, WriteMode, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00508900, void, ReadMode, (app::Archive * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00508940, void, Serialize_1, (app::Archive * this_ptr, float* value))
    IL2CPP_REGISTER_METHOD(0x00508960, void, Serialize_2, (app::Archive * this_ptr, int32_t* value))
    IL2CPP_REGISTER_METHOD(0x005089E0, void, Serialize_3, (app::Archive * this_ptr, bool* value))
    IL2CPP_REGISTER_METHOD(0x00508A60, void, Serialize_4, (app::Archive * this_ptr, app::String** value))
    IL2CPP_REGISTER_METHOD(0x00508AE0, void, Serialize_5, (app::Archive * this_ptr, app::Vector2* value))
    IL2CPP_REGISTER_METHOD(0x00508B40, void, Serialize_6, (app::Archive * this_ptr, app::Vector3* value))
    IL2CPP_REGISTER_METHOD(0x00508BD0, void, Serialize_7, (app::Archive * this_ptr, app::Quaternion* value))
    IL2CPP_REGISTER_METHOD(0x00508CA0, float, Serialize_8, (app::Archive * this_ptr, float value))
    IL2CPP_REGISTER_METHOD(0x00508D10, int32_t, Serialize_9, (app::Archive * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x00508D70, bool, Serialize_10, (app::Archive * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x00508DD0, app::String*, Serialize_11, (app::Archive * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x00508E30, app::Vector2, Serialize_12, (app::Archive * this_ptr, app::Vector2 value))
    IL2CPP_REGISTER_METHOD(0x00508E80, app::Vector3, Serialize_13, (app::Archive * this_ptr, app::Vector3 value))
    IL2CPP_REGISTER_METHOD(0x00508F30, app::Quaternion, Serialize_14, (app::Archive * this_ptr, app::Quaternion value))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, SerializeVersion, (app::Archive * this_ptr, int32_t* version))
} // namespace app::classes::Archive
