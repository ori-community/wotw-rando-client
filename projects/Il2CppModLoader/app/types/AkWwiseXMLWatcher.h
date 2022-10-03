#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AkWwiseXMLWatcher {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AkWwiseXMLWatcher__Class** type_info;
        inline app::AkWwiseXMLWatcher__Class* get_class() {
            return il2cpp::get_class<app::AkWwiseXMLWatcher__Class>(type_info, "", "AkWwiseXMLWatcher");
        }
        inline app::AkWwiseXMLWatcher* create() {
            return il2cpp::create_object<app::AkWwiseXMLWatcher>(get_class());
        }
    } // namespace AkWwiseXMLWatcher
} // namespace app::classes::types
