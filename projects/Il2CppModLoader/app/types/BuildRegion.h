#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace BuildRegion {
        namespace {
            app::BuildRegion__Class* type_info_ref = nullptr;
        }
        app::BuildRegion__Class** type_info = &type_info_ref;
        inline app::BuildRegion__Class* get_class() {
            return il2cpp::get_class<app::BuildRegion__Class>(type_info, "PlayFab.MultiplayerModels", "BuildRegion");
        }
        inline app::BuildRegion* create() {
            return il2cpp::create_object<app::BuildRegion>(get_class());
        }
        inline app::BuildRegion__Array* create_array(int size) {
            return il2cpp::array_new<app::BuildRegion__Array>(get_class(), size);
        }
        inline app::BuildRegion__Array* create_array(const std::vector<app::BuildRegion*>& items) {
            return il2cpp::array_new<app::BuildRegion__Array>(get_class(), items);
        }
    } // namespace BuildRegion
} // namespace app::classes::types
