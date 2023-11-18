#pragma once
#include <Modloader/app/structs/Quest.h>
#include <Modloader/app/structs/Quest__Array.h>
#include <Modloader/app/structs/Quest__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Quest {
        inline app::Quest__Class** type_info() {
            static app::Quest__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Quest__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Quest__Class* get_class() {
            return il2cpp::get_class<app::Quest__Class>(type_info(), "", "Quest");
        }
        inline app::Quest* create() {
            return il2cpp::create_object<app::Quest>(get_class());
        }
        inline app::Quest__Array* create_array(int size) {
            return il2cpp::array_new<app::Quest__Array>(get_class(), size);
        }
        inline app::Quest__Array* create_array(const std::vector<app::Quest*>& items) {
            return il2cpp::array_new<app::Quest__Array>(get_class(), items);
        }
    } // namespace Quest
} // namespace app::classes::types
