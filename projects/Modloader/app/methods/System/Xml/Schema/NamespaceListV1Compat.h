#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/NamespaceListV1Compat.h>
#include <Modloader/app/structs/String.h>

namespace app::classes::System::Xml::Schema::NamespaceListV1Compat {
    IL2CPP_REGISTER_METHOD(0x016D0020, void, ctor, app::NamespaceListV1Compat* this_ptr, app::String* namespaces, app::String* target_namespace)
    IL2CPP_REGISTER_METHOD(0x016D0030, bool, Allows, app::NamespaceListV1Compat* this_ptr, app::String* ns)
} // namespace app::classes::System::Xml::Schema::NamespaceListV1Compat
