#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/BinaryArray.h>
#include <Modloader/app/structs/BinaryArrayTypeEnum__Enum.h>
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#include <Modloader/app/structs/BinaryTypeEnum__Enum.h>
#include <Modloader/app/structs/Int32__Array.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/_BinaryWriter.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryArray {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, app::BinaryArray* this_ptr)
    IL2CPP_REGISTER_METHOD(0x004C5130, void, ctor_2, app::BinaryArray* this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum)
    IL2CPP_REGISTER_METHOD(
        0x01D8B670,
        void,
        Set,
        app::BinaryArray* this_ptr,
        int32_t object_id,
        int32_t rank,
        app::Int32__Array* length_a,
        app::Int32__Array* lower_bound_a,
        app::BinaryTypeEnum__Enum binary_type_enum,
        app::Object* type_information,
        app::BinaryArrayTypeEnum__Enum binary_array_type_enum,
        int32_t assem_id
    )
    IL2CPP_REGISTER_METHOD(0x01D8B6E0, void, Write, app::BinaryArray* this_ptr, app::_BinaryWriter* sout)
    IL2CPP_REGISTER_METHOD(0x01D8BBC0, void, Read, app::BinaryArray* this_ptr, app::_BinaryParser* input)
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::BinaryArray
