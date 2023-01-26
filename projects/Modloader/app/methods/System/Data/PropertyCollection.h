#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/PropertyCollection.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>

namespace app::classes::System::Data::PropertyCollection {
    IL2CPP_REGISTER_METHOD(0x01E49380, void, ctor_1, (app::PropertyCollection * this_ptr))
    IL2CPP_REGISTER_METHOD(0x01E493A0, void, ctor_2, (app::PropertyCollection * this_ptr, app::SerializationInfo* info, app::StreamingContext context))
    IL2CPP_REGISTER_METHOD(0x01E493C0, app::Object*, Clone, (app::PropertyCollection * this_ptr))
} // namespace app::classes::System::Data::PropertyCollection
