#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Pointer_1.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/Type.h>
#include <Modloader/app/structs/Void.h>

namespace app::classes::System::Reflection::Pointer {
    IL2CPP_REGISTER_METHOD(0x002FA000, void, ctor_1, (app::Pointer_1 * this_ptr))
    IL2CPP_REGISTER_METHOD(0x02695560, void, ctor_2, (app::Pointer_1 * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x026956F0, app::Object*, Box, (app::Void * ptr, app::Type* type))
    IL2CPP_REGISTER_METHOD(0x026959A0, void, ISerializable_GetObjectData, (app::Pointer_1 * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::Reflection::Pointer
