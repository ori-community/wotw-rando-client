#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace InstantiationHistory_PrefabData__Array {
        namespace {
            app::InstantiationHistory_PrefabData__Array__Class* type_info_ref = nullptr;
        }
        app::InstantiationHistory_PrefabData__Array__Class** type_info = &type_info_ref;
        inline app::InstantiationHistory_PrefabData__Array__Class* get_class() {
            return il2cpp::get_class<app::InstantiationHistory_PrefabData__Array__Class>(type_info, "", "InstantiationHistory+PrefabData[]");
        }
        inline app::InstantiationHistory_PrefabData__Array* create() {
            return il2cpp::create_object<app::InstantiationHistory_PrefabData__Array>(get_class());
        }
    } // namespace InstantiationHistory_PrefabData__Array
} // namespace app::classes::types
