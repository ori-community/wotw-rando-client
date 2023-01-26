#pragma once
#include <Modloader/app/structs/CleverMenuItem.h>
#include <Modloader/app/structs/CleverMenuItem__Array.h>
#include <Modloader/app/structs/CleverMenuItem__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CleverMenuItem {
        inline app::CleverMenuItem__Class** type_info() {
            static app::CleverMenuItem__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CleverMenuItem__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CleverMenuItem__Class* get_class() {
            return il2cpp::get_class<app::CleverMenuItem__Class>(type_info(), "", "CleverMenuItem");
        }
        inline app::CleverMenuItem* create() {
            return il2cpp::create_object<app::CleverMenuItem>(get_class());
        }
        inline app::CleverMenuItem__Array* create_array(int size) {
            return il2cpp::array_new<app::CleverMenuItem__Array>(get_class(), size);
        }
        inline app::CleverMenuItem__Array* create_array(const std::vector<app::CleverMenuItem*>& items) {
            return il2cpp::array_new<app::CleverMenuItem__Array>(get_class(), items);
        }
    } // namespace CleverMenuItem
} // namespace app::classes::types
