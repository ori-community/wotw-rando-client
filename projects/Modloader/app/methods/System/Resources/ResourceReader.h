#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Dictionary_2_System_String_System_Resources_ResourceLocator_.h>
#include <Modloader/app/structs/IDictionaryEnumerator.h>
#include <Modloader/app/structs/IEnumerator.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/ResourceReader.h>
#include <Modloader/app/structs/ResourceReader_ResourceEnumerator.h>
#include <Modloader/app/structs/ResourceTypeCode__Enum.h>
#include <Modloader/app/structs/RuntimeType.h>
#include <Modloader/app/structs/Stream.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Resources::ResourceReader {
    IL2CPP_REGISTER_METHOD(
        0x01A887D0,
        void,
        ctor,
        app::ResourceReader* this_ptr,
        app::Stream* stream,
        app::Dictionary_2_System_String_System_Resources_ResourceLocator_* res_cache
    )
    IL2CPP_REGISTER_METHOD(0x01A88990, void, Close, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A88990, void, Dispose_1, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A889F0, void, Dispose_2, app::ResourceReader* this_ptr, bool disposing)
    IL2CPP_REGISTER_METHOD(0x01A88A50, int32_t, ReadUnalignedI4, int32_t* p)
    IL2CPP_REGISTER_METHOD(0x01A88A70, void, SkipString, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A88BA0, int32_t, GetNameHash, app::ResourceReader* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01A88C20, int32_t, GetNamePosition, app::ResourceReader* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01A88DB0, app::IEnumerator*, IEnumerable_GetEnumerator, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A88DC0, app::IDictionaryEnumerator*, GetEnumerator, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A88F60, app::ResourceReader_ResourceEnumerator*, GetEnumeratorInternal, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A890B0, int32_t, FindPosForResource, app::ResourceReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01A89540, bool, CompareStringEqualsName, app::ResourceReader* this_ptr, app::String* name)
    IL2CPP_REGISTER_METHOD(0x01A89890, app::String*, AllocateStringForNameIndex, app::ResourceReader* this_ptr, int32_t index, int32_t* data_offset)
    IL2CPP_REGISTER_METHOD(0x01A8A090, app::Object*, GetValueForNameIndex, app::ResourceReader* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x01A8A390, app::String*, LoadString, app::ResourceReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01A8A6C0, app::Object*, LoadObject_1, app::ResourceReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01A8A6F0, app::Object*, LoadObject_2, app::ResourceReader* this_ptr, int32_t pos, app::ResourceTypeCode__Enum* type_code)
    IL2CPP_REGISTER_METHOD(0x01A8A7D0, app::Object*, LoadObjectV1, app::ResourceReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01A8A8F0, app::Object*, _LoadObjectV1, app::ResourceReader* this_ptr, int32_t pos)
    IL2CPP_REGISTER_METHOD(0x01A8B0B0, app::Object*, LoadObjectV2, app::ResourceReader* this_ptr, int32_t pos, app::ResourceTypeCode__Enum* type_code)
    IL2CPP_REGISTER_METHOD(0x01A8B1E0, app::Object*, _LoadObjectV2, app::ResourceReader* this_ptr, int32_t pos, app::ResourceTypeCode__Enum* type_code)
    IL2CPP_REGISTER_METHOD(0x01A8BE50, app::Object*, DeserializeObject, app::ResourceReader* this_ptr, int32_t type_index)
    IL2CPP_REGISTER_METHOD(0x01A8C060, void, ReadResources, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A8C260, void, _ReadResources, app::ResourceReader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A8CD20, app::RuntimeType*, FindType, app::ResourceReader* this_ptr, int32_t type_index)
} // namespace app::classes::System::Resources::ResourceReader
