#pragma once
#include <Modloader/app/structs/PowerFuse.h>
#include <Modloader/app/structs/PowerFuse__Array.h>
#include <Modloader/app/structs/PowerFuse__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PowerFuse {
        inline app::PowerFuse__Class** type_info() {
            static app::PowerFuse__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PowerFuse__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PowerFuse__Class* get_class() {
            return il2cpp::get_class<app::PowerFuse__Class>(type_info(), "", "PowerFuse");
        }
        inline app::PowerFuse* create() {
            return il2cpp::create_object<app::PowerFuse>(get_class());
        }
        inline app::PowerFuse__Array* create_array(int size) {
            return il2cpp::array_new<app::PowerFuse__Array>(get_class(), size);
        }
        inline app::PowerFuse__Array* create_array(const std::vector<app::PowerFuse*>& items) {
            return il2cpp::array_new<app::PowerFuse__Array>(get_class(), items);
        }
    } // namespace PowerFuse
} // namespace app::classes::types
