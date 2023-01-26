#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/JobProducerTypeAttribute.h>
#include <Modloader/app/structs/Type.h>

namespace app::classes::Unity::Jobs::LowLevel::Unsafe::JobProducerTypeAttribute {
    IL2CPP_REGISTER_METHOD(0x002FA490, void, ctor, (app::JobProducerTypeAttribute * this_ptr, app::Type* producer_type))
}
