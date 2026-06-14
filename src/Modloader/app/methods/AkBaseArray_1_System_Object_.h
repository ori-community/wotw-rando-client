#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AkBaseArray_1_System_Object_.h>
#include <Modloader/app/structs/Object.h>

namespace app::classes::AkBaseArray_1_System_Object_ {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_Capacity, app::AkBaseArray_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, set_Capacity, app::AkBaseArray_1_System_Object_* this_ptr, int32_t value)
    IL2CPP_REGISTER_METHOD(0x019D75F0, app::Object*, get_Item, app::AkBaseArray_1_System_Object_* this_ptr, int32_t index)
    IL2CPP_REGISTER_METHOD(0x019D7640, void, set_Item, app::AkBaseArray_1_System_Object_* this_ptr, int32_t index, app::Object* value)
    IL2CPP_REGISTER_METHOD(0x019D7280, void, ctor, app::AkBaseArray_1_System_Object_* this_ptr, int32_t capacity)
    IL2CPP_REGISTER_METHOD(0x019D73D0, void, Dispose, app::AkBaseArray_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D7510, void, Finalize, app::AkBaseArray_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D75C0, int32_t, Count, app::AkBaseArray_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DefaultConstructAtIntPtr, app::AkBaseArray_1_System_Object_* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReleaseAllocatedMemoryFromReferenceAtIntPtr, app::AkBaseArray_1_System_Object_* this_ptr, void* address)
    IL2CPP_REGISTER_METHOD(0x002FB930, void*, GetBuffer, app::AkBaseArray_1_System_Object_* this_ptr)
    IL2CPP_REGISTER_METHOD(0x019D76A0, void*, GetObjectPtr, app::AkBaseArray_1_System_Object_* this_ptr, int32_t index)
} // namespace app::classes::AkBaseArray_1_System_Object_
