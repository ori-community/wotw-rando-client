#pragma once
#include <Modloader/app/structs/Panel.h>
#include <Modloader/app/structs/Panel__Array.h>
#include <Modloader/app/structs/Panel__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Panel {
        inline app::Panel__Class** type_info() {
            static app::Panel__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Panel__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Panel__Class* get_class() {
            return il2cpp::get_class<app::Panel__Class>(type_info(), "", "Panel");
        }
        inline app::Panel* create() {
            return il2cpp::create_object<app::Panel>(get_class());
        }
        inline app::Panel__Array* create_array(int size) {
            return il2cpp::array_new<app::Panel__Array>(get_class(), size);
        }
        inline app::Panel__Array* create_array(const std::vector<app::Panel*>& items) {
            return il2cpp::array_new<app::Panel__Array>(get_class(), items);
        }
    } // namespace Panel
} // namespace app::classes::types
