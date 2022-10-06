#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PauseMenuProgressElements_UberStateToElement {
        namespace {
            app::PauseMenuProgressElements_UberStateToElement__Class* type_info_ref = nullptr;
        }
        app::PauseMenuProgressElements_UberStateToElement__Class** type_info = &type_info_ref;
        inline app::PauseMenuProgressElements_UberStateToElement__Class* get_class() {
            return il2cpp::get_nested_class<app::PauseMenuProgressElements_UberStateToElement__Class>(type_info, "", "PauseMenuProgressElements", "UberStateToElement");
        }
        inline app::PauseMenuProgressElements_UberStateToElement* create() {
            return il2cpp::create_object<app::PauseMenuProgressElements_UberStateToElement>(get_class());
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Boxed* box(app::PauseMenuProgressElements_UberStateToElement value) {
            return il2cpp::box_value<app::PauseMenuProgressElements_UberStateToElement__Boxed>(get_class(), value);
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Array* create_array(int size) {
            return il2cpp::array_new<app::PauseMenuProgressElements_UberStateToElement__Array>(get_class(), size);
        }
        inline app::PauseMenuProgressElements_UberStateToElement__Array* create_array(const std::vector<app::PauseMenuProgressElements_UberStateToElement__Boxed>& items) {
            return il2cpp::array_new<app::PauseMenuProgressElements_UberStateToElement__Array>(get_class(), items);
        }
    } // namespace PauseMenuProgressElements_UberStateToElement
} // namespace app::classes::types
