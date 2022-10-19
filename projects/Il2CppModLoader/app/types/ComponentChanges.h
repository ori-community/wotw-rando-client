#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ComponentChanges {
        namespace {
            inline app::ComponentChanges__Class* type_info_ref = nullptr;
        }
        inline app::ComponentChanges__Class** type_info = &type_info_ref;
        inline app::ComponentChanges__Class* get_class() {
            return il2cpp::get_class<app::ComponentChanges__Class>(type_info, "Moon.ReviewFramework", "ComponentChanges");
        }
        inline app::ComponentChanges* create() {
            return il2cpp::create_object<app::ComponentChanges>(get_class());
        }
        inline app::ComponentChanges__Array* create_array(int size) {
            return il2cpp::array_new<app::ComponentChanges__Array>(get_class(), size);
        }
        inline app::ComponentChanges__Array* create_array(const std::vector<app::ComponentChanges*>& items) {
            return il2cpp::array_new<app::ComponentChanges__Array>(get_class(), items);
        }
    } // namespace ComponentChanges
} // namespace app::classes::types
