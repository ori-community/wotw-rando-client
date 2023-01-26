#pragma once
#include <Modloader/app/structs/LimitedLifetime.h>
#include <Modloader/app/structs/LimitedLifetime__Array.h>
#include <Modloader/app/structs/LimitedLifetime__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LimitedLifetime {
        inline app::LimitedLifetime__Class** type_info() {
            static app::LimitedLifetime__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LimitedLifetime__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LimitedLifetime__Class* get_class() {
            return il2cpp::get_class<app::LimitedLifetime__Class>(type_info(), "", "LimitedLifetime");
        }
        inline app::LimitedLifetime* create() {
            return il2cpp::create_object<app::LimitedLifetime>(get_class());
        }
        inline app::LimitedLifetime__Array* create_array(int size) {
            return il2cpp::array_new<app::LimitedLifetime__Array>(get_class(), size);
        }
        inline app::LimitedLifetime__Array* create_array(const std::vector<app::LimitedLifetime*>& items) {
            return il2cpp::array_new<app::LimitedLifetime__Array>(get_class(), items);
        }
    } // namespace LimitedLifetime
} // namespace app::classes::types
