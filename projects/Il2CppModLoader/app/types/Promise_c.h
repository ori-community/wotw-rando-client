#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Promise_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Promise_c__Class** type_info;
        inline app::Promise_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Promise_c__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "Promise", "<>c");
        }
        inline app::Promise_c* create() {
            return il2cpp::create_object<app::Promise_c>(get_class());
        }
    } // namespace Promise_c
} // namespace app::classes::types
