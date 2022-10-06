#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace WorldEvents {
        namespace {
            app::WorldEvents__Class* type_info_ref = nullptr;
        }
        app::WorldEvents__Class** type_info = &type_info_ref;
        inline app::WorldEvents__Class* get_class() {
            return il2cpp::get_class<app::WorldEvents__Class>(type_info, "", "WorldEvents");
        }
        inline app::WorldEvents* create() {
            return il2cpp::create_object<app::WorldEvents>(get_class());
        }
        inline app::WorldEvents__Array* create_array(int size) {
            return il2cpp::array_new<app::WorldEvents__Array>(get_class(), size);
        }
        inline app::WorldEvents__Array* create_array(const std::vector<app::WorldEvents*>& items) {
            return il2cpp::array_new<app::WorldEvents__Array>(get_class(), items);
        }
    } // namespace WorldEvents
} // namespace app::classes::types
