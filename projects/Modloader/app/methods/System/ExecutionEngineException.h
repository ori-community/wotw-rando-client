#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Exception.h>
#include <Modloader/app/structs/ExecutionEngineException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::ExecutionEngineException {
    IL2CPP_REGISTER_METHOD(0x01A1C810, void, ctor_1, app::ExecutionEngineException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01A1C8A0, void, ctor_2, app::ExecutionEngineException* this_ptr, app::String* message)
    IL2CPP_REGISTER_METHOD(0x01A1C8C0, void, ctor_3, app::ExecutionEngineException* this_ptr, app::String* message, app::Exception* inner_exception)
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, app::ExecutionEngineException* this_ptr, app::SerializationInfo* info, app::StreamingContext context)
} // namespace app::classes::System::ExecutionEngineException
