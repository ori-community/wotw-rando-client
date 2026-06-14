#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DynamicInstantiationProviderAttribute.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::DynamicInstantiationProviderAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, app::DynamicInstantiationProviderAttribute* this_ptr, app::String* provider_name)
    IL2CPP_REGISTER_METHOD(0x002FA280, app::String*, get_ProviderName, app::DynamicInstantiationProviderAttribute* this_ptr)
} // namespace app::classes::DynamicInstantiationProviderAttribute
