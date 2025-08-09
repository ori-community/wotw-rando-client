#pragma once
#include <Modloader/interception_macros.h>

#include <Modloader/app/structs/String.h>
#include <Modloader/app/structs/XmlNamespaceManager_NamespaceDeclaration__Boxed.h>

namespace app::classes::System::Xml::XmlNamespaceManager_NamespaceDeclaration {
    IL2CPP_REGISTER_METHOD(
        0x001CFE80,
        void,
        Set,
        app::XmlNamespaceManager_NamespaceDeclaration__Boxed* this_ptr,
        app::String* prefix,
        app::String* uri,
        int32_t scope_id,
        int32_t previous_ns_index
    )
}
