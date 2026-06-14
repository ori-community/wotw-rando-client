#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/AsyncProtocolResult.h>
#include <Modloader/app/structs/ExceptionDispatchInfo.h>

namespace app::classes::Mono::Net::Security::AsyncProtocolResult {
    IL2CPP_REGISTER_METHOD(0x002FC6D0, int32_t, get_UserResult, app::AsyncProtocolResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::ExceptionDispatchInfo*, get_Error, app::AsyncProtocolResult* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FC6E0, void, ctor_1, app::AsyncProtocolResult* this_ptr, int32_t result)
    IL2CPP_REGISTER_METHOD(0x002FB940, void, ctor_2, app::AsyncProtocolResult* this_ptr, app::ExceptionDispatchInfo* error)
} // namespace app::classes::Mono::Net::Security::AsyncProtocolResult
