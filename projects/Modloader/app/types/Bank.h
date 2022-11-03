#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Bank {
        namespace {
            inline app::Bank__Class* type_info_ref = nullptr;
        }
        inline app::Bank__Class** type_info = &type_info_ref;
        inline app::Bank__Class* get_class() {
            return il2cpp::get_class<app::Bank__Class>(type_info, "AK.Wwise", "Bank");
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
