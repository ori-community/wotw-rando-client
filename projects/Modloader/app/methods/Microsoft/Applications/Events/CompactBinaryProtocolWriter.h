#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/List_1_System_Byte_.h>
#include <Modloader/app/structs/CompactBinaryProtocolWriter.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::Microsoft::Applications::Events::CompactBinaryProtocolWriter {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::List_1_System_Byte_*, get_Data, (app::CompactBinaryProtocolWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA290, void, ctor_1, (app::CompactBinaryProtocolWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor_2, (app::CompactBinaryProtocolWriter * this_ptr, app::List_1_System_Byte_* output))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteStructBegin, (app::CompactBinaryProtocolWriter * this_ptr, app::Object* nullptr_1, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FA4A0, void, writeVarint_1, (app::CompactBinaryProtocolWriter * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x002FA660, void, writeVarint_2, (app::CompactBinaryProtocolWriter * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x002FA820, void, writeVarint_3, (app::CompactBinaryProtocolWriter * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FA9E0, void, writeVarint_4, (app::CompactBinaryProtocolWriter * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x002FABA0, void, writeVarint_5, (app::CompactBinaryProtocolWriter * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FAD60, void, writeVarint_6, (app::CompactBinaryProtocolWriter * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002FAF20, void, WriteBlob_1, (app::CompactBinaryProtocolWriter * this_ptr, app::List_1_System_Byte_* data, int32_t size))
    IL2CPP_REGISTER_METHOD(0x002FAFD0, void, WriteBlob_2, (app::CompactBinaryProtocolWriter * this_ptr, app::Byte__Array* data, int32_t size))
    IL2CPP_REGISTER_METHOD(0x002FB080, void, WriteBool, (app::CompactBinaryProtocolWriter * this_ptr, bool value))
    IL2CPP_REGISTER_METHOD(0x002FB180, void, WriteUInt8, (app::CompactBinaryProtocolWriter * this_ptr, uint8_t value))
    IL2CPP_REGISTER_METHOD(0x002FB280, void, WriteUInt16, (app::CompactBinaryProtocolWriter * this_ptr, uint16_t value))
    IL2CPP_REGISTER_METHOD(0x002FB290, void, WriteUInt32, (app::CompactBinaryProtocolWriter * this_ptr, uint32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB2A0, void, WriteUInt64, (app::CompactBinaryProtocolWriter * this_ptr, uint64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB2B0, void, WriteInt8, (app::CompactBinaryProtocolWriter * this_ptr, int8_t value))
    IL2CPP_REGISTER_METHOD(0x002FB2C0, void, WriteInt16, (app::CompactBinaryProtocolWriter * this_ptr, int16_t value))
    IL2CPP_REGISTER_METHOD(0x002FB2E0, void, WriteInt32, (app::CompactBinaryProtocolWriter * this_ptr, int32_t value))
    IL2CPP_REGISTER_METHOD(0x002FB300, void, WriteInt64, (app::CompactBinaryProtocolWriter * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x002FB320, void, WriteDouble, (app::CompactBinaryProtocolWriter * this_ptr, double value))
    IL2CPP_REGISTER_METHOD(0x002FB3E0, void, WriteString, (app::CompactBinaryProtocolWriter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB3E0, void, WriteWString, (app::CompactBinaryProtocolWriter * this_ptr, app::String* value))
    IL2CPP_REGISTER_METHOD(0x002FB470, void, WriteContainerBegin, (app::CompactBinaryProtocolWriter * this_ptr, uint16_t size, uint8_t element_type))
    IL2CPP_REGISTER_METHOD(0x002FB4B0, void, WriteMapContainerBegin, (app::CompactBinaryProtocolWriter * this_ptr, uint16_t size, uint8_t key_type, uint8_t value_type))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteContainerEnd, (app::CompactBinaryProtocolWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB510, void, WriteFieldBegin, (app::CompactBinaryProtocolWriter * this_ptr, uint8_t type, uint16_t id))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFieldEnd, (app::CompactBinaryProtocolWriter * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FB910, void, WriteStructEnd, (app::CompactBinaryProtocolWriter * this_ptr, bool is_base))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, WriteFieldOmitted, (app::CompactBinaryProtocolWriter * this_ptr, uint8_t b_t__s_t_r_i_n_g, int32_t v))
} // namespace app::classes::Microsoft::Applications::Events::CompactBinaryProtocolWriter
