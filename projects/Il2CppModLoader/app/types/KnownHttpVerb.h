#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KnownHttpVerb {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KnownHttpVerb__Class** type_info;
        inline app::KnownHttpVerb__Class* get_class() {
            return il2cpp::get_class<app::KnownHttpVerb__Class>(type_info, "System.Net", "KnownHttpVerb");
        }
        inline app::KnownHttpVerb* create() {
            return il2cpp::create_object<app::KnownHttpVerb>(get_class());
        }
    } // namespace KnownHttpVerb
} // namespace app::classes::types
