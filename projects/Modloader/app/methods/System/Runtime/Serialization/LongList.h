#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/LongList.h>

namespace app::classes::System::Runtime::Serialization::LongList {
    IL2CPP_REGISTER_METHOD(0x01ED5410, void, ctor_1, (app::LongList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED54B0, void, ctor_2, (app::LongList * this_ptr, int32_t starting_size))
    IL2CPP_REGISTER_METHOD(0x01ED5550, void, Add, (app::LongList * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, (app::LongList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x00443280, void, StartEnumeration, (app::LongList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED5670, bool, MoveNext, (app::LongList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED56E0, int64_t, get_Current, (app::LongList * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01ED5720, bool, RemoveElement, (app::LongList * this_ptr, int64_t value))
    IL2CPP_REGISTER_METHOD(0x01ED57B0, void, EnlargeArray, (app::LongList * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04759998, LongList_EnlargeArray__MethodInfo)
} // namespace app::classes::System::Runtime::Serialization::LongList
