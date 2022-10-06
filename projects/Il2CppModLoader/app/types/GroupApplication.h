#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GroupApplication {
        namespace {
            app::GroupApplication__Class* type_info_ref = nullptr;
        }
        app::GroupApplication__Class** type_info = &type_info_ref;
        inline app::GroupApplication__Class* get_class() {
            return il2cpp::get_class<app::GroupApplication__Class>(type_info, "PlayFab.GroupsModels", "GroupApplication");
        }
        inline app::GroupApplication* create() {
            return il2cpp::create_object<app::GroupApplication>(get_class());
        }
        inline app::GroupApplication__Array* create_array(int size) {
            return il2cpp::array_new<app::GroupApplication__Array>(get_class(), size);
        }
        inline app::GroupApplication__Array* create_array(const std::vector<app::GroupApplication*>& items) {
            return il2cpp::array_new<app::GroupApplication__Array>(get_class(), items);
        }
    } // namespace GroupApplication
} // namespace app::classes::types
