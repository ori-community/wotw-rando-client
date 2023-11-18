#pragma once
#include <Modloader/app/structs/NpcProjectItem.h>
#include <Modloader/app/structs/NpcProjectItem__Array.h>
#include <Modloader/app/structs/NpcProjectItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NpcProjectItem {
        inline app::NpcProjectItem__Class** type_info() {
            static app::NpcProjectItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NpcProjectItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NpcProjectItem__Class* get_class() {
            return il2cpp::get_class<app::NpcProjectItem__Class>(type_info(), "", "NpcProjectItem");
        }
        inline app::NpcProjectItem* create() {
            return il2cpp::create_object<app::NpcProjectItem>(get_class());
        }
        inline app::NpcProjectItem__Array* create_array(int size) {
            return il2cpp::array_new<app::NpcProjectItem__Array>(get_class(), size);
        }
        inline app::NpcProjectItem__Array* create_array(const std::vector<app::NpcProjectItem*>& items) {
            return il2cpp::array_new<app::NpcProjectItem__Array>(get_class(), items);
        }
    } // namespace NpcProjectItem
} // namespace app::classes::types
