#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ObjectHolder.h>
#include <Modloader/app/structs/ObjectHolderList.h>
#include <Modloader/app/structs/ObjectHolderListEnumerator.h>

namespace app::classes::System::Runtime::Serialization::ObjectHolderList {
    IL2CPP_REGISTER_METHOD(0x01ED6C70, void, ctor_1, app::ObjectHolderList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED6D10, void, ctor_2, app::ObjectHolderList* this_ptr, int32_t starting_size)
    IL2CPP_REGISTER_METHOD(0x01ED6DB0, void, Add, app::ObjectHolderList* this_ptr, app::ObjectHolder* value)
    IL2CPP_REGISTER_METHOD(0x01ED6F00, app::ObjectHolderListEnumerator*, GetFixupEnumerator, app::ObjectHolderList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01ED7060, void, EnlargeArray, app::ObjectHolderList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Version, app::ObjectHolderList* this_ptr)
    IL2CPP_REGISTER_METHOD(0x00529FF0, int32_t, get_Count, app::ObjectHolderList* this_ptr)
} // namespace app::classes::System::Runtime::Serialization::ObjectHolderList
