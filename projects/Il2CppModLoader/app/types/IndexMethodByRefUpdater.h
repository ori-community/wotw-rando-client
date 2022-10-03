#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IndexMethodByRefUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IndexMethodByRefUpdater__Class** type_info;
        inline app::IndexMethodByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::IndexMethodByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "IndexMethodByRefUpdater");
        }
        inline app::IndexMethodByRefUpdater* create() {
            return il2cpp::create_object<app::IndexMethodByRefUpdater>(get_class());
        }
    } // namespace IndexMethodByRefUpdater
} // namespace app::classes::types
