#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TryFaultHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TryFaultHandler__Class** type_info;
        inline app::TryFaultHandler__Class* get_class() {
            return il2cpp::get_class<app::TryFaultHandler__Class>(type_info, "System.Linq.Expressions.Interpreter", "TryFaultHandler");
        }
        inline app::TryFaultHandler* create() {
            return il2cpp::create_object<app::TryFaultHandler>(get_class());
        }
    } // namespace TryFaultHandler
} // namespace app::classes::types
