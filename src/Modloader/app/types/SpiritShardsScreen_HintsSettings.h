#pragma once
#include <Modloader/app/structs/SpiritShardsScreen_HintsSettings.h>
#include <Modloader/app/structs/SpiritShardsScreen_HintsSettings__Boxed.h>
#include <Modloader/app/structs/SpiritShardsScreen_HintsSettings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpiritShardsScreen_HintsSettings {
        inline app::SpiritShardsScreen_HintsSettings__Class** type_info() {
            static app::SpiritShardsScreen_HintsSettings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SpiritShardsScreen_HintsSettings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SpiritShardsScreen_HintsSettings__Class* get_class() {
            return il2cpp::get_nested_class<app::SpiritShardsScreen_HintsSettings__Class>(type_info(), "", "SpiritShardsScreen", "HintsSettings");
        }
        inline app::SpiritShardsScreen_HintsSettings* create() {
            return il2cpp::create_object<app::SpiritShardsScreen_HintsSettings>(get_class());
        }
        inline app::SpiritShardsScreen_HintsSettings__Boxed* box(app::SpiritShardsScreen_HintsSettings value) {
            return il2cpp::box_value<app::SpiritShardsScreen_HintsSettings__Boxed>(get_class(), value);
        }
    } // namespace SpiritShardsScreen_HintsSettings
} // namespace app::classes::types
