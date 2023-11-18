#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CancellationToken.h>
#include <Modloader/app/structs/OperationCanceledException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::OperationCanceledException {
    IL2CPP_REGISTER_METHOD(0x002FBC20, app::CancellationToken, get_CancellationToken, (app::OperationCanceledException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x002FBC30, void, set_CancellationToken, (app::OperationCanceledException * this_ptr, app::CancellationToken value))
    IL2CPP_REGISTER_METHOD(0x0227C0E0, void, ctor_1, (app::OperationCanceledException * this_ptr))
    IL2CPP_REGISTER_METHOD(0x0227C170, void, ctor_2, (app::OperationCanceledException * this_ptr, app::String* message))
    IL2CPP_REGISTER_METHOD(0x0227C190, void, ctor_3, (app::OperationCanceledException * this_ptr, app::String* message, app::CancellationToken token))
    IL2CPP_REGISTER_METHOD(0x01A0FAA0, void, ctor_4, (app::OperationCanceledException * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
} // namespace app::classes::System::OperationCanceledException
