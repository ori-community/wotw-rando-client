#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/_BinaryParser.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/ObjectReader.h>
#include <Modloader/app/structs/BinaryAssemblyInfo.h>
#include <Modloader/app/structs/SizedArray.h>
#include <Modloader/app/structs/ParseRecord.h>
#include <Modloader/app/structs/Byte__Array.h>
#include <Modloader/app/structs/Char__Array.h>
#include <Modloader/app/structs/Decimal.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TimeSpan.h>
#include <Modloader/app/structs/DateTime.h>
#include <Modloader/app/structs/BinaryHeaderEnum__Enum.h>
#include <Modloader/app/structs/BinaryObjectWithMap.h>
#include <Modloader/app/structs/BinaryObjectWithMapTyped.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/InternalPrimitiveTypeE__Enum.h>
#include <Modloader/app/structs/ObjectProgress.h>

namespace app::classes::System::Runtime::Serialization::Formatters::Binary::__BinaryParser {
    IL2CPP_REGISTER_METHOD(0x01DA46A0, void, ctor, (app::_BinaryParser * this_ptr, app::Stream* stream, app::ObjectReader* object_reader))
    IL2CPP_REGISTER_METHOD(0x01DA4920, app::BinaryAssemblyInfo*, get_SystemAssemblyInfo, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA4AC0, app::SizedArray*, get_ObjectMapIdTable, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA4C90, app::SizedArray*, get_AssemIdToAssemblyTable, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA4E60, app::ParseRecord*, get_prs, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA4FB0, void, Run, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477D750, _BinaryParser_Run__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReadBegin, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReadEnd, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCF40, bool, ReadBoolean, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD060, uint8_t, ReadByte, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD510, app::Byte__Array*, ReadBytes_1, (app::_BinaryParser * this_ptr, int32_t length))
    IL2CPP_REGISTER_METHOD(0x01DA54D0, void, ReadBytes_2, (app::_BinaryParser * this_ptr, app::Byte__Array* byte_a, int32_t offset, int32_t size))
    IL2CPP_REGISTER_METHOD(0x01DA5550, uint16_t, ReadChar, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5580, app::Char__Array*, ReadChars, (app::_BinaryParser * this_ptr, int32_t length))
    IL2CPP_REGISTER_METHOD(0x01DA55B0, app::Decimal, ReadDecimal, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD5A0, float, ReadSingle, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA56E0, double, ReadDouble, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCCFA0, int16_t, ReadInt16, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD000, int32_t, ReadInt32, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5710, int64_t, ReadInt64, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01BCD060, int8_t, ReadSByte, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5740, app::String*, ReadString, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5710, app::TimeSpan, ReadTimeSpan, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5770, app::DateTime, ReadDateTime, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5830, uint16_t, ReadUInt16, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5860, uint32_t, ReadUInt32, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5890, uint64_t, ReadUInt64, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA58C0, void, ReadSerializationHeaderRecord, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA5A70, void, ReadAssembly, (app::_BinaryParser * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHODINFO(0x0474C650, _BinaryParser_ReadAssembly__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA5F90, void, ReadObject, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04789B00, _BinaryParser_ReadObject__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA6590, void, ReadCrossAppDomainMap, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04762938, _BinaryParser_ReadCrossAppDomainMap__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA6850, void, ReadObjectWithMap_1, (app::_BinaryParser * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHOD(0x01DA69F0, void, ReadObjectWithMap_2, (app::_BinaryParser * this_ptr, app::BinaryObjectWithMap* record))
    IL2CPP_REGISTER_METHODINFO(0x04745EA8, _BinaryParser_ReadObjectWithMap_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA7160, void, ReadObjectWithMapTyped_1, (app::_BinaryParser * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHOD(0x01DA72F0, void, ReadObjectWithMapTyped_2, (app::_BinaryParser * this_ptr, app::BinaryObjectWithMapTyped* record))
    IL2CPP_REGISTER_METHODINFO(0x04737368, _BinaryParser_ReadObjectWithMapTyped_1__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA7AA0, void, ReadObjectString, (app::_BinaryParser * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHODINFO(0x04764568, _BinaryParser_ReadObjectString__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA83B0, void, ReadMemberPrimitiveTyped, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04766C00, _BinaryParser_ReadMemberPrimitiveTyped__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA8900, void, ReadArray, (app::_BinaryParser * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHODINFO(0x04755938, _BinaryParser_ReadArray__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DA90D0, void, ReadArrayAsBytes, (app::_BinaryParser * this_ptr, app::ParseRecord* pr))
    IL2CPP_REGISTER_METHOD(0x01DA94F0, void, ReadMemberPrimitiveUnTyped, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA9930, void, ReadMemberReference, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DA9CB0, void, ReadObjectNull, (app::_BinaryParser * this_ptr, app::BinaryHeaderEnum__Enum binary_header_enum))
    IL2CPP_REGISTER_METHOD(0x01DAA090, void, ReadMessageEnd, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x047536E0, _BinaryParser_ReadMessageEnd__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DAA300, app::Object*, ReadValue, (app::_BinaryParser * this_ptr, app::InternalPrimitiveTypeE__Enum code))
    IL2CPP_REGISTER_METHODINFO(0x04784DF0, _BinaryParser_ReadValue__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x01DAA8F0, app::ObjectProgress*, GetOp, (app::_BinaryParser * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01DAAC10, void, PutOp, (app::_BinaryParser * this_ptr, app::ObjectProgress* op))
    IL2CPP_REGISTER_METHOD(0x01DAAD90, void, cctor, ())
} // namespace app::classes::System::Runtime::Serialization::Formatters::Binary::__BinaryParser
