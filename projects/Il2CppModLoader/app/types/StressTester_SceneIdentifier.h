#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace StressTester_SceneIdentifier {
        namespace {
            app::StressTester_SceneIdentifier__Class* type_info_ref = nullptr;
        }
        app::StressTester_SceneIdentifier__Class** type_info = &type_info_ref;
        inline app::StressTester_SceneIdentifier__Class* get_class() {
            return il2cpp::get_nested_class<app::StressTester_SceneIdentifier__Class>(type_info, "", "StressTester", "SceneIdentifier");
        }
        inline app::StressTester_SceneIdentifier* create() {
            return il2cpp::create_object<app::StressTester_SceneIdentifier>(get_class());
        }
        inline app::StressTester_SceneIdentifier__Array* create_array(int size) {
            return il2cpp::array_new<app::StressTester_SceneIdentifier__Array>(get_class(), size);
        }
        inline app::StressTester_SceneIdentifier__Array* create_array(const std::vector<app::StressTester_SceneIdentifier*>& items) {
            return il2cpp::array_new<app::StressTester_SceneIdentifier__Array>(get_class(), items);
        }
    } // namespace StressTester_SceneIdentifier
} // namespace app::classes::types
