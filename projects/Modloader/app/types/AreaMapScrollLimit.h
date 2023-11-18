#pragma once
#include <Modloader/app/structs/AreaMapScrollLimit.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Array.h>
#include <Modloader/app/structs/AreaMapScrollLimit__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AreaMapScrollLimit {
        inline app::AreaMapScrollLimit__Class** type_info() {
            static app::AreaMapScrollLimit__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::AreaMapScrollLimit__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::AreaMapScrollLimit__Class* get_class() {
            return il2cpp::get_class<app::AreaMapScrollLimit__Class>(type_info(), "", "AreaMapScrollLimit");
        }
        inline app::AreaMapScrollLimit* create() {
            return il2cpp::create_object<app::AreaMapScrollLimit>(get_class());
        }
        inline app::AreaMapScrollLimit__Array* create_array(int size) {
            return il2cpp::array_new<app::AreaMapScrollLimit__Array>(get_class(), size);
        }
        inline app::AreaMapScrollLimit__Array* create_array(const std::vector<app::AreaMapScrollLimit*>& items) {
            return il2cpp::array_new<app::AreaMapScrollLimit__Array>(get_class(), items);
        }
    } // namespace AreaMapScrollLimit
} // namespace app::classes::types
