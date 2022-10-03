#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UpgradableLevelProperties__Array {
        namespace {
            app::UpgradableLevelProperties__Array__Class* type_info_ref = nullptr;
        }
        app::UpgradableLevelProperties__Array__Class** type_info = &type_info_ref;
        inline app::UpgradableLevelProperties__Array__Class* get_class() {
            return il2cpp::get_class<app::UpgradableLevelProperties__Array__Class>(type_info, "", "UpgradableLevelProperties[]");
        }
        inline app::UpgradableLevelProperties__Array* create() {
            return il2cpp::create_object<app::UpgradableLevelProperties__Array>(get_class());
        }
    } // namespace UpgradableLevelProperties__Array
} // namespace app::classes::types
