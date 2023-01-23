#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/NotImplementedException.h>
#include <Modloader/app/structs/NotSupportedException.h>
#include <Modloader/app/structs/WebException.h>

namespace app::classes::System::Net::ExceptionHelper {
    IL2CPP_REGISTER_METHOD(0x01D27350, app::NotImplementedException*, get_MethodNotImplementedException, ())
    IL2CPP_REGISTER_METHOD(0x01D274B0, app::NotImplementedException*, get_PropertyNotImplementedException, ())
    IL2CPP_REGISTER_METHOD(0x01D27610, app::NotSupportedException*, get_MethodNotSupportedException, ())
    IL2CPP_REGISTER_METHOD(0x01D27770, app::NotSupportedException*, get_PropertyNotSupportedException, ())
    IL2CPP_REGISTER_METHOD(0x01D278D0, app::WebException*, get_IsolatedException, ())
    IL2CPP_REGISTER_METHOD(0x01D27A40, app::WebException*, get_RequestAbortedException, ())
    IL2CPP_REGISTER_METHOD(0x01D27BB0, app::WebException*, get_CacheEntryNotFoundException, ())
    IL2CPP_REGISTER_METHOD(0x01D27D20, app::WebException*, get_RequestProhibitedByCachePolicyException, ())
} // namespace app::classes::System::Net::ExceptionHelper
