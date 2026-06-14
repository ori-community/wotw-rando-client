#pragma once
#include <Modloader/app/structs/KuState.h>
#include <Modloader/app/structs/KuState__Array.h>
#include <Modloader/app/structs/KuState__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KuState {
        inline app::KuState__Class** type_info() {
            static app::KuState__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::KuState__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::KuState__Class* get_class() {
            return il2cpp::get_class<app::KuState__Class>(type_info(), "", "KuState");
        }
        inline app::KuState* create() {
            return il2cpp::create_object<app::KuState>(get_class());
        }
        inline app::KuState__Array* create_array(int size) {
            return il2cpp::array_new<app::KuState__Array>(get_class(), size);
        }
        inline app::KuState__Array* create_array(const std::vector<app::KuState*>& items) {
            return il2cpp::array_new<app::KuState__Array>(get_class(), items);
        }
    } // namespace KuState
} // namespace app::classes::types
