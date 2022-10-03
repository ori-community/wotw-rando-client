#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PropertyByRefUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::PropertyByRefUpdater__Class** type_info;
        inline app::PropertyByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::PropertyByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "PropertyByRefUpdater");
        }
        inline app::PropertyByRefUpdater* create() {
            return il2cpp::create_object<app::PropertyByRefUpdater>(get_class());
        }
    } // namespace PropertyByRefUpdater
} // namespace app::classes::types
