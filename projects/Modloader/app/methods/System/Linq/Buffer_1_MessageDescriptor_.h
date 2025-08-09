#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Buffer_1_MessageDescriptor___Boxed.h>
#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageDescriptor__Array.h>

namespace app::classes::System::Linq::Buffer_1_MessageDescriptor_ {
    IL2CPP_REGISTER_METHOD(0x00218A80, void, ctor, app::Buffer_1_MessageDescriptor___Boxed* this_ptr, app::IEnumerable_1_MessageDescriptor_* source)
    IL2CPP_REGISTER_METHOD(0x00218A90, app::MessageDescriptor__Array*, ToArray, app::Buffer_1_MessageDescriptor___Boxed* this_ptr)
} // namespace app::classes::System::Linq::Buffer_1_MessageDescriptor_
