#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Promise_Enumerated {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Promise_Enumerated__Class** type_info;
        inline app::Promise_Enumerated__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_Enumerated__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise", "Enumerated");
        }
        inline app::Promise_Enumerated* create() {
            return il2cpp::create_object<app::Promise_Enumerated>(get_class());
        }
    } // namespace Promise_Enumerated
} // namespace app::classes::types
