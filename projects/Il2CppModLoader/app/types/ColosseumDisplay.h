#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ColosseumDisplay {
        namespace {
            app::ColosseumDisplay__Class* type_info_ref = nullptr;
        }
        app::ColosseumDisplay__Class** type_info = &type_info_ref;
        inline app::ColosseumDisplay__Class* get_class() {
            return il2cpp::get_class<app::ColosseumDisplay__Class>(type_info, "", "ColosseumDisplay");
        }
        inline app::ColosseumDisplay* create() {
            return il2cpp::create_object<app::ColosseumDisplay>(get_class());
        }
    } // namespace ColosseumDisplay
} // namespace app::classes::types
