#pragma once
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas.h>
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsAreaMapCanvas {
        inline app::MistyWoodsAreaMapCanvas__Class** type_info() {
            static app::MistyWoodsAreaMapCanvas__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsAreaMapCanvas__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsAreaMapCanvas__Class* get_class() {
            return il2cpp::get_class<app::MistyWoodsAreaMapCanvas__Class>(type_info(), "", "MistyWoodsAreaMapCanvas");
        }
        inline app::MistyWoodsAreaMapCanvas* create() {
            return il2cpp::create_object<app::MistyWoodsAreaMapCanvas>(get_class());
        }
    } // namespace MistyWoodsAreaMapCanvas
} // namespace app::classes::types
