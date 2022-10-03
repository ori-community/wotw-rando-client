#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Statics {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Statics__Class** type_info;
        inline app::Statics__Class* get_class() {
            return il2cpp::get_class<app::Statics__Class>(type_info, "System.Diagnostics.Tracing", "Statics");
        }
        inline app::Statics* create() {
            return il2cpp::create_object<app::Statics>(get_class());
        }
    } // namespace Statics
} // namespace app::classes::types
