#pragma once
#include <Modloader/app/structs/Challenge.h>
#include <Modloader/app/structs/Challenge__Array.h>
#include <Modloader/app/structs/Challenge__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Challenge {
        inline app::Challenge__Class** type_info() {
            static app::Challenge__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Challenge__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Challenge__Class* get_class() {
            return il2cpp::get_class<app::Challenge__Class>(type_info(), "", "Challenge");
        }
        inline app::Challenge* create() {
            return il2cpp::create_object<app::Challenge>(get_class());
        }
        inline app::Challenge__Array* create_array(int size) {
            return il2cpp::array_new<app::Challenge__Array>(get_class(), size);
        }
        inline app::Challenge__Array* create_array(const std::vector<app::Challenge*>& items) {
            return il2cpp::array_new<app::Challenge__Array>(get_class(), items);
        }
    } // namespace Challenge
} // namespace app::classes::types
