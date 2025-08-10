#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/UnreferencedObjectEventArgs.h>

namespace app::classes::System::Xml::Serialization::UnreferencedObjectEventArgs {
    IL2CPP_REGISTER_METHOD(0x01C99B90, void, ctor, app::UnreferencedObjectEventArgs* this_ptr, app::Object* o, app::String* id)
}
