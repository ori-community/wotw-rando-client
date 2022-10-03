#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetAsset {
        namespace {
            app::UberPresetAsset__Class* type_info_ref = nullptr;
        }
        app::UberPresetAsset__Class** type_info = &type_info_ref;
        inline app::UberPresetAsset__Class* get_class() {
            return il2cpp::get_class<app::UberPresetAsset__Class>(type_info, "", "UberPresetAsset");
        }
        inline app::UberPresetAsset* create() {
            return il2cpp::create_object<app::UberPresetAsset>(get_class());
        }
        inline app::UberPresetAsset__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPresetAsset__Array>(get_class(), size);
        }
    } // namespace UberPresetAsset
} // namespace app::classes::types
