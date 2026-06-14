#pragma once
#include <Modloader/app/structs/PersistentCall.h>
#include <Modloader/app/structs/PersistentCall__Array.h>
#include <Modloader/app/structs/PersistentCall__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PersistentCall {
        inline app::PersistentCall__Class** type_info() {
            static app::PersistentCall__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PersistentCall__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PersistentCall__Class* get_class() {
            return il2cpp::get_class<app::PersistentCall__Class>(type_info(), "UnityEngine.Events", "PersistentCall");
        }
        inline app::PersistentCall* create() {
            return il2cpp::create_object<app::PersistentCall>(get_class());
        }
        inline app::PersistentCall__Array* create_array(int size) {
            return il2cpp::array_new<app::PersistentCall__Array>(get_class(), size);
        }
        inline app::PersistentCall__Array* create_array(const std::vector<app::PersistentCall*>& items) {
            return il2cpp::array_new<app::PersistentCall__Array>(get_class(), items);
        }
    } // namespace PersistentCall
} // namespace app::classes::types
