#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/RuntimeWrappedException.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Runtime::CompilerServices::RuntimeWrappedException {
    IL2CPP_REGISTER_METHOD(0x01A92850, void, ctor_1, (app::RuntimeWrappedException * this_ptr, app::Object* thrown_object))
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::Object*, get_WrappedException, (app::RuntimeWrappedException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01A92920, void, GetObjectData, (app::RuntimeWrappedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01A92A60, void, ctor_2, (app::RuntimeWrappedException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01A92B80, void, ctor_3, (app::RuntimeWrappedException * this_ptr))
} // namespace app::classes::System::Runtime::CompilerServices::RuntimeWrappedException
