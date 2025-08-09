#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/CachedTransportContext.h>
#include <Modloader/app/structs/ChannelBinding.h>
#include <Modloader/app/structs/ChannelBindingKind__Enum.h>

namespace app::classes::System::Net::CachedTransportContext {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::CachedTransportContext* this_ptr, app::ChannelBinding* binding)
    IL2CPP_REGISTER_METHOD(0x02016510, app::ChannelBinding*, GetChannelBinding, app::CachedTransportContext* this_ptr, app::ChannelBindingKind__Enum kind)
} // namespace app::classes::System::Net::CachedTransportContext
