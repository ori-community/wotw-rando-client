#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkBaseArray_1_AkObjectInfo_ {
    IL2CPP_REGISTER_METHOD(0x019D7280, void, ctor, (app::AkBaseArray_1_AkObjectInfo_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x0471B578, AkBaseArray_1_AkObjectInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, void *, GetBuffer, (app::AkBaseArray_1_AkObjectInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04742D80, AkBaseArray_1_AkObjectInfo__GetBuffer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7510, void, Finalize, (app::AkBaseArray_1_AkObjectInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D73D0, void, Dispose, (app::AkBaseArray_1_AkObjectInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D75C0, int32_t, Count, (app::AkBaseArray_1_AkObjectInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReleaseAllocatedMemoryFromReferenceAtIntPtr, (app::AkBaseArray_1_AkObjectInfo_ * this_ptr, void * address))
}
