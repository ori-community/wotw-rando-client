#pragma once
#include <Modloader/app/structs/LeashMarkEffect.h>
#include <Modloader/app/structs/LeashMarkEffect__Array.h>
#include <Modloader/app/structs/LeashMarkEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LeashMarkEffect {
        inline app::LeashMarkEffect__Class** type_info() {
            static app::LeashMarkEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LeashMarkEffect__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LeashMarkEffect__Class* get_class() {
            return il2cpp::get_class<app::LeashMarkEffect__Class>(type_info(), "", "LeashMarkEffect");
        }
        inline app::LeashMarkEffect* create() {
            return il2cpp::create_object<app::LeashMarkEffect>(get_class());
        }
        inline app::LeashMarkEffect__Array* create_array(int size) {
            return il2cpp::array_new<app::LeashMarkEffect__Array>(get_class(), size);
        }
        inline app::LeashMarkEffect__Array* create_array(const std::vector<app::LeashMarkEffect*>& items) {
            return il2cpp::array_new<app::LeashMarkEffect__Array>(get_class(), items);
        }
    } // namespace LeashMarkEffect
} // namespace app::classes::types
