#pragma once
#include <Modloader/app/structs/WormHole.h>
#include <Modloader/app/structs/WormHole__Array.h>
#include <Modloader/app/structs/WormHole__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WormHole {
        inline app::WormHole__Class** type_info() {
            static app::WormHole__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WormHole__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WormHole__Class* get_class() {
            return il2cpp::get_class<app::WormHole__Class>(type_info(), "", "WormHole");
        }
        inline app::WormHole* create() {
            return il2cpp::create_object<app::WormHole>(get_class());
        }
        inline app::WormHole__Array* create_array(int size) {
            return il2cpp::array_new<app::WormHole__Array>(get_class(), size);
        }
        inline app::WormHole__Array* create_array(const std::vector<app::WormHole*>& items) {
            return il2cpp::array_new<app::WormHole__Array>(get_class(), items);
        }
    } // namespace WormHole
} // namespace app::classes::types
