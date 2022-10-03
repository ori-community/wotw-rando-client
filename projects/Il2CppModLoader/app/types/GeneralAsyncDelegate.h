#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GeneralAsyncDelegate {
        namespace {
            app::GeneralAsyncDelegate__Class* type_info_ref = nullptr;
        }
        app::GeneralAsyncDelegate__Class** type_info = &type_info_ref;
        inline app::GeneralAsyncDelegate__Class* get_class() {
            return il2cpp::get_class<app::GeneralAsyncDelegate__Class>(type_info, "System.Net", "GeneralAsyncDelegate");
        }
        inline app::GeneralAsyncDelegate* create() {
            return il2cpp::create_object<app::GeneralAsyncDelegate>(get_class());
        }
    } // namespace GeneralAsyncDelegate
} // namespace app::classes::types
