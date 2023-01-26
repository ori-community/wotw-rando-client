#pragma once
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas_CanvasItem.h>
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas_CanvasItem__Array.h>
#include <Modloader/app/structs/MistyWoodsAreaMapCanvas_CanvasItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MistyWoodsAreaMapCanvas_CanvasItem {
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Class** type_info() {
            static app::MistyWoodsAreaMapCanvas_CanvasItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MistyWoodsAreaMapCanvas_CanvasItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Class* get_class() {
            return il2cpp::get_nested_class<app::MistyWoodsAreaMapCanvas_CanvasItem__Class>(type_info(), "", "MistyWoodsAreaMapCanvas", "CanvasItem");
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem* create() {
            return il2cpp::create_object<app::MistyWoodsAreaMapCanvas_CanvasItem>(get_class());
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Array* create_array(int size) {
            return il2cpp::array_new<app::MistyWoodsAreaMapCanvas_CanvasItem__Array>(get_class(), size);
        }
        inline app::MistyWoodsAreaMapCanvas_CanvasItem__Array* create_array(const std::vector<app::MistyWoodsAreaMapCanvas_CanvasItem*>& items) {
            return il2cpp::array_new<app::MistyWoodsAreaMapCanvas_CanvasItem__Array>(get_class(), items);
        }
    } // namespace MistyWoodsAreaMapCanvas_CanvasItem
} // namespace app::classes::types
