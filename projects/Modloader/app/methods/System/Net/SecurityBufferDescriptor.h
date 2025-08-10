#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/SecurityBufferDescriptor.h>

namespace app::classes::System::Net::SecurityBufferDescriptor {
    IL2CPP_REGISTER_METHOD(0x01BD3180, void, ctor, app::SecurityBufferDescriptor* this_ptr, int32_t count)
    IL2CPP_REGISTER_METHOD(0x002FA000, void, DebugDump, app::SecurityBufferDescriptor* this_ptr)
} // namespace app::classes::System::Net::SecurityBufferDescriptor
