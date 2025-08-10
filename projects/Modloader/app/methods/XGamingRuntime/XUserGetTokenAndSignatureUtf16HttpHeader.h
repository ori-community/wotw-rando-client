#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XUserGetTokenAndSignatureUtf16HttpHeader.h>

namespace app::classes::XGamingRuntime::XUserGetTokenAndSignatureUtf16HttpHeader {
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_Name, app::XUserGetTokenAndSignatureUtf16HttpHeader* this_ptr)
    IL2CPP_REGISTER_METHOD(0x002FB930, app::String*, get_Value, app::XUserGetTokenAndSignatureUtf16HttpHeader* this_ptr)
} // namespace app::classes::XGamingRuntime::XUserGetTokenAndSignatureUtf16HttpHeader
