#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/TargetException.h>

namespace app::classes::System::Reflection::TargetException {
    IL2CPP_REGISTER_METHOD(0x02698BE0, void, ctor_1, app::TargetException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x02698CA0, void, ctor_2, app::TargetException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x0268AE20, void, ctor_3, app::TargetException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::Reflection::TargetException
