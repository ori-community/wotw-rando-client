#pragma once
#include <Modloader/app/structs/VerticalSpacer_Item.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Array.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Boxed.h>
#include <Modloader/app/structs/VerticalSpacer_Item__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VerticalSpacer_Item {
        inline app::VerticalSpacer_Item__Class** type_info() {
            static app::VerticalSpacer_Item__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::VerticalSpacer_Item__Class**)(modloader::win::memory::resolve_rva(0x0473CCF8));
            }
            return cache;
        }
        inline app::VerticalSpacer_Item__Class* get_class() {
            return il2cpp::get_nested_class<app::VerticalSpacer_Item__Class>(type_info(), "", "VerticalSpacer", "Item");
        }
        inline app::VerticalSpacer_Item* create() {
            return il2cpp::create_object<app::VerticalSpacer_Item>(get_class());
        }
        inline app::VerticalSpacer_Item__Boxed* box(app::VerticalSpacer_Item value) {
            return il2cpp::box_value<app::VerticalSpacer_Item__Boxed>(get_class(), value);
        }
        inline app::VerticalSpacer_Item__Array* create_array(int size) {
            return il2cpp::array_new<app::VerticalSpacer_Item__Array>(get_class(), size);
        }
        inline app::VerticalSpacer_Item__Array* create_array(const std::vector<app::VerticalSpacer_Item>& items) {
            return il2cpp::array_new<app::VerticalSpacer_Item__Array>(get_class(), items);
        }
    } // namespace VerticalSpacer_Item
} // namespace app::classes::types
