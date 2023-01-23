#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/DateTimeParse_MatchNumberDelegate.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/_DTString.h>
#include <Modloader/app/structs/IAsyncResult.h>
#include <Modloader/app/structs/AsyncCallback.h>

namespace app::classes::System::DateTimeParse_MatchNumberDelegate {
    IL2CPP_REGISTER_METHOD(0x00611810, void, ctor, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::Object* object, void* method_1))
    IL2CPP_REGISTER_METHOD(0x028B92F0, bool, Invoke, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::_DTString* str, int32_t digit_len, int32_t* result))
    IL2CPP_REGISTER_METHOD(0x028B9690, app::IAsyncResult*, BeginInvoke, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::_DTString* str, int32_t digit_len, int32_t* result, app::AsyncCallback* callback, app::Object* object))
    IL2CPP_REGISTER_METHOD(0x0167DD00, bool, EndInvoke, (app::DateTimeParse_MatchNumberDelegate * this_ptr, app::_DTString* str, int32_t* result, app::IAsyncResult* __result))
} // namespace app::classes::System::DateTimeParse_MatchNumberDelegate
