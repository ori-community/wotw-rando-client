#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/ExceptionHandlingClause.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Reflection::ExceptionHandlingClause {
    IL2CPP_REGISTER_METHOD(0x0268A020, app::String*, ToString, app::ExceptionHandlingClause* this_ptr)
}
