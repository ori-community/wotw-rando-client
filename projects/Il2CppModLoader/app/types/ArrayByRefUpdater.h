#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArrayByRefUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ArrayByRefUpdater__Class** type_info;
        inline app::ArrayByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::ArrayByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "ArrayByRefUpdater");
        }
        inline app::ArrayByRefUpdater* create() {
            return il2cpp::create_object<app::ArrayByRefUpdater>(get_class());
        }
    } // namespace ArrayByRefUpdater
} // namespace app::classes::types
