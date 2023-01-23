#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/AkSerializedCallbackHeader.h>
#include <Modloader/app/structs/AkCallbackType__Enum.h>

namespace app::classes::AkSerializedCallbackHeader {
    IL2CPP_REGISTER_METHOD(0x01880BB0, void, ctor_1, (app::AkSerializedCallbackHeader * this_ptr, void* c_ptr, bool c_memory_own))
    IL2CPP_REGISTER_METHOD(0x01897EB0, void*, getCPtr, (app::AkSerializedCallbackHeader * obj))
    IL2CPP_REGISTER_METHOD(0x01880C50, void, setCPtr, (app::AkSerializedCallbackHeader * this_ptr, void* c_ptr))
    IL2CPP_REGISTER_METHOD(0x01897F40, void, Finalize, (app::AkSerializedCallbackHeader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01897FC0, void, Dispose, (app::AkSerializedCallbackHeader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018981D0, void*, get_pPackage, (app::AkSerializedCallbackHeader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01898270, app::AkSerializedCallbackHeader*, get_pNext, (app::AkSerializedCallbackHeader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01898400, app::AkCallbackType__Enum, get_eType, (app::AkSerializedCallbackHeader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x018984A0, void*, GetData, (app::AkSerializedCallbackHeader * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01898540, void, ctor_2, (app::AkSerializedCallbackHeader * this_ptr))
} // namespace app::classes::AkSerializedCallbackHeader
