#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsScreen_HintsSettings {
        namespace {
            app::SpiritShardsScreen_HintsSettings__Class* type_info_ref = nullptr;
        }
        app::SpiritShardsScreen_HintsSettings__Class** type_info = &type_info_ref;
        inline app::SpiritShardsScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsScreen_HintsSettings__Class>(type_info, "", "SpiritShardsScreen", "HintsSettings");
        }
        inline app::SpiritShardsScreen_HintsSettings* create() {
            return il2cpp::create_object<app::SpiritShardsScreen_HintsSettings>(get_class());
        }
        inline app::SpiritShardsScreen_HintsSettings__Boxed* box(app::SpiritShardsScreen_HintsSettings value) {
            return il2cpp::box_value<app::SpiritShardsScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace SpiritShardsScreen_HintsSettings
} // namespace app::classes::types
