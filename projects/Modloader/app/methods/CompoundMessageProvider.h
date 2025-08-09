#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CompoundMessageProvider.h>
#include <Modloader/app/structs/IEnumerable_1_MessageDescriptor_.h>
#include <Modloader/app/structs/MessageProvider.h>

namespace app::classes::CompoundMessageProvider {
    IL2CPP_REGISTER_METHOD(0x002FB9E0, void, SetMessage, app::CompoundMessageProvider* this_ptr, app::MessageProvider* message)
    IL2CPP_REGISTER_METHOD(0x011E1E00, app::IEnumerable_1_MessageDescriptor_*, GetMessages, app::CompoundMessageProvider* this_ptr)
    IL2CPP_REGISTER_METHOD(0x011E1F90, void, ctor, app::CompoundMessageProvider* this_ptr)
} // namespace app::classes::CompoundMessageProvider
