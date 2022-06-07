#pragma once
#include <Il2CppModLoader/interception_macros.h>

namespace app::methods::AkBaseArray_1_AkVertex_ {
    IL2CPP_REGISTER_METHOD(0x002FB930, void *, GetBuffer, (app::AkBaseArray_1_AkVertex_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x0477C798, AkBaseArray_1_AkVertex__GetBuffer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7280, void, ctor, (app::AkBaseArray_1_AkVertex_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04723298, AkBaseArray_1_AkVertex___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7510, void, Finalize, (app::AkBaseArray_1_AkVertex_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D73D0, void, Dispose, (app::AkBaseArray_1_AkVertex_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D75C0, int32_t, Count, (app::AkBaseArray_1_AkVertex_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ReleaseAllocatedMemoryFromReferenceAtIntPtr, (app::AkBaseArray_1_AkVertex_ * this_ptr, void * address))
}
