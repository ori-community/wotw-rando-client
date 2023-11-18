#pragma once
#include <Modloader/app/structs/ActivationChild.h>
#include <Modloader/app/structs/ActivationChild__Array.h>
#include <Modloader/app/structs/ActivationChild__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActivationChild {
        inline app::ActivationChild__Class** type_info() {
            static app::ActivationChild__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ActivationChild__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ActivationChild__Class* get_class() {
            return il2cpp::get_class<app::ActivationChild__Class>(type_info(), "", "ActivationChild");
        }
        inline app::ActivationChild* create() {
            return il2cpp::create_object<app::ActivationChild>(get_class());
        }
        inline app::ActivationChild__Array* create_array(int size) {
            return il2cpp::array_new<app::ActivationChild__Array>(get_class(), size);
        }
        inline app::ActivationChild__Array* create_array(const std::vector<app::ActivationChild*>& items) {
            return il2cpp::array_new<app::ActivationChild__Array>(get_class(), items);
        }
    } // namespace ActivationChild
} // namespace app::classes::types
