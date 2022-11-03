#pragma once
#include <Modloader/interception_macros.h>

namespace app::classes::AkBaseArray_1_AkExternalSourceInfo_ {
    IL2CPP_REGISTER_METHOD(0x019D7280, void, ctor, (app::AkBaseArray_1_AkExternalSourceInfo_ * this_ptr, int32_t capacity))
    IL2CPP_REGISTER_METHODINFO(0x04794990, AkBaseArray_1_AkExternalSourceInfo___ctor__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x002FB930, void*, GetBuffer, (app::AkBaseArray_1_AkExternalSourceInfo_ * this_ptr))
    IL2CPP_REGISTER_METHODINFO(0x04712CC8, AkBaseArray_1_AkExternalSourceInfo__GetBuffer__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7640, void, set_Item, (app::AkBaseArray_1_AkExternalSourceInfo_ * this_ptr, int32_t index, app::AkExternalSourceInfo* value))
    IL2CPP_REGISTER_METHODINFO(0x0478AE98, AkBaseArray_1_AkExternalSourceInfo__set_Item__MethodInfo)
    IL2CPP_REGISTER_METHOD(0x019D7510, void, Finalize, (app::AkBaseArray_1_AkExternalSourceInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D73D0, void, Dispose, (app::AkBaseArray_1_AkExternalSourceInfo_ * this_ptr))
    IL2CPP_REGISTER_METHOD(0x019D75C0, int32_t, Count, (app::AkBaseArray_1_AkExternalSourceInfo_ * this_ptr))
} // namespace app::classes::AkBaseArray_1_AkExternalSourceInfo_
