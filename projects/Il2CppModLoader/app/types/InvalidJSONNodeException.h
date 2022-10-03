#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InvalidJSONNodeException {
        extern IL2CPP_MODLOADER_DLLEXPORT app::InvalidJSONNodeException__Class** type_info;
        inline app::InvalidJSONNodeException__Class* get_class() {
            return il2cpp::get_class<app::InvalidJSONNodeException__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "InvalidJSONNodeException");
        }
        inline app::InvalidJSONNodeException* create() {
            return il2cpp::create_object<app::InvalidJSONNodeException>(get_class());
        }
    } // namespace InvalidJSONNodeException
} // namespace app::classes::types
