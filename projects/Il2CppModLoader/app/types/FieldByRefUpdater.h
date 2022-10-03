#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FieldByRefUpdater {
        extern IL2CPP_MODLOADER_DLLEXPORT app::FieldByRefUpdater__Class** type_info;
        inline app::FieldByRefUpdater__Class* get_class() {
            return il2cpp::get_class<app::FieldByRefUpdater__Class>(type_info, "System.Linq.Expressions.Interpreter", "FieldByRefUpdater");
        }
        inline app::FieldByRefUpdater* create() {
            return il2cpp::create_object<app::FieldByRefUpdater>(get_class());
        }
    } // namespace FieldByRefUpdater
} // namespace app::classes::types
