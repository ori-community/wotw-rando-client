#pragma once
#include <Modloader/app/structs/Bank.h>
#include <Modloader/app/structs/Bank__Array.h>
#include <Modloader/app/structs/Bank__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Bank {
        inline app::Bank__Class** type_info() {
            static app::Bank__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Bank__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Bank__Class* get_class() {
            return il2cpp::get_class<app::Bank__Class>(type_info(), "AK.Wwise", "Bank");
        }
        inline app::Bank* create() {
            return il2cpp::create_object<app::Bank>(get_class());
        }
        inline app::Bank__Array* create_array(int size) {
            return il2cpp::array_new<app::Bank__Array>(get_class(), size);
        }
        inline app::Bank__Array* create_array(const std::vector<app::Bank*>& items) {
            return il2cpp::array_new<app::Bank__Array>(get_class(), items);
        }
    } // namespace Bank
} // namespace app::classes::types
