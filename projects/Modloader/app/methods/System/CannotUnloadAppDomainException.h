#pragma once
#include <Modloader/interception_macros.h>
#include <Modloader/app/structs/CannotUnloadAppDomainException.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::CannotUnloadAppDomainException {
    IL2CPP_REGISTER_METHOD(0x022A0070, void, ctor_1, (app::CannotUnloadAppDomainException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x022A0100, void, ctor_2, (app::CannotUnloadAppDomainException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_3, (app::CannotUnloadAppDomainException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::CannotUnloadAppDomainException
