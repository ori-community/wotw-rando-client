#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TryCatchFinallyHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TryCatchFinallyHandler__Class** type_info;
        inline app::TryCatchFinallyHandler__Class* get_class() {
            return il2cpp::get_class<app::TryCatchFinallyHandler__Class>(type_info, "System.Linq.Expressions.Interpreter", "TryCatchFinallyHandler");
        }
        inline app::TryCatchFinallyHandler* create() {
            return il2cpp::create_object<app::TryCatchFinallyHandler>(get_class());
        }
    } // namespace TryCatchFinallyHandler
} // namespace app::classes::types
