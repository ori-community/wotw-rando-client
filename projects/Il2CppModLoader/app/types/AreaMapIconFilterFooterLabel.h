#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AreaMapIconFilterFooterLabel {
        namespace {
            app::AreaMapIconFilterFooterLabel__Class* type_info_ref = nullptr;
        }
        app::AreaMapIconFilterFooterLabel__Class** type_info = &type_info_ref;
        inline app::AreaMapIconFilterFooterLabel__Class* get_class() {
            return il2cpp::get_class<app::AreaMapIconFilterFooterLabel__Class>(type_info, "", "AreaMapIconFilterFooterLabel");
        }
        inline app::AreaMapIconFilterFooterLabel* create() {
            return il2cpp::create_object<app::AreaMapIconFilterFooterLabel>(get_class());
        }
        inline app::AreaMapIconFilterFooterLabel__Boxed* box(app::AreaMapIconFilterFooterLabel value) {
            return il2cpp::box_value<app::AreaMapIconFilterFooterLabel__Boxed>(get_class(), value);
        }
        inline app::AreaMapIconFilterFooterLabel__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapIconFilterFooterLabel__Array>(get_class(), size);
        }
        inline app::AreaMapIconFilterFooterLabel__Array* create_array(const std::vector<app::AreaMapIconFilterFooterLabel>& items) {
            return il2cpp::array_new<app::AreaMapIconFilterFooterLabel__Array>(get_class(), items);
        }
    } // namespace AreaMapIconFilterFooterLabel
} // namespace app::classes::types
