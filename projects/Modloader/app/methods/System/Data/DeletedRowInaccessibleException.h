#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/DeletedRowInaccessibleException.h>
#include <Modloader/app/structs/SerializationInfo.h>
#include <Modloader/app/structs/StreamingContext.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Data::DeletedRowInaccessibleException {
    IL2CPP_REGISTER_METHOD(
        0x01F4D060,
        void,
        ctor_1,
        app::DeletedRowInaccessibleException* this_ptr,
        app::SerializationInfo* info,
        app::StreamingContext context
    )
    IL2CPP_REGISTER_METHOD(0x01F4D0B0, void, ctor_2, app::DeletedRowInaccessibleException* this_ptr)
    IL2CPP_REGISTER_METHOD(0x01F4D140, void, ctor_3, app::DeletedRowInaccessibleException* this_ptr, app::String* s)
} // namespace app::classes::System::Data::DeletedRowInaccessibleException
