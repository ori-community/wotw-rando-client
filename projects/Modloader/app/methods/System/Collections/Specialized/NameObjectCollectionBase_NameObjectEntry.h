#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NameObjectCollectionBase_NameObjectEntry.h>
#include <Modloader/app/structs/Object.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Collections::Specialized::NameObjectCollectionBase_NameObjectEntry {
    IL2CPP_REGISTER_METHOD(0x0058DA40, void, ctor, app::NameObjectCollectionBase_NameObjectEntry* this_ptr, app::String* name, app::Object* value)
}
