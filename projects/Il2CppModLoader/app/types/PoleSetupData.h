#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace PoleSetupData {
        namespace {
            app::PoleSetupData__Class* type_info_ref = nullptr;
        }
        app::PoleSetupData__Class** type_info = &type_info_ref;
        inline app::PoleSetupData__Class* get_class() {
            return il2cpp::get_class<app::PoleSetupData__Class>(type_info, "Game", "PoleSetupData");
        }
        inline app::PoleSetupData* create() {
            return il2cpp::create_object<app::PoleSetupData>(get_class());
        }
        inline app::PoleSetupData__Array* create_array(int size) {
            return il2cpp::array_new<app::PoleSetupData__Array>(get_class(), size);
        }
    } // namespace PoleSetupData
} // namespace app::classes::types
