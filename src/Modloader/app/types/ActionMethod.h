#pragma once
#include <Modloader/app/structs/ActionMethod.h>
#include <Modloader/app/structs/ActionMethod__Array.h>
#include <Modloader/app/structs/ActionMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionMethod {
        inline app::ActionMethod__Class** type_info() {
            static app::ActionMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActionMethod__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActionMethod__Class* get_class() {
            return il2cpp::get_class<app::ActionMethod__Class>(type_info(), "", "ActionMethod");
        }
        inline app::ActionMethod* create() {
            return il2cpp::create_object<app::ActionMethod>(get_class());
        }
        inline app::ActionMethod__Array* create_array(int size) {
            return il2cpp::array_new<app::ActionMethod__Array>(get_class(), size);
        }
        inline app::ActionMethod__Array* create_array(const std::vector<app::ActionMethod*>& items) {
            return il2cpp::array_new<app::ActionMethod__Array>(get_class(), items);
        }
    } // namespace ActionMethod
} // namespace app::classes::types
