#pragma once
#include <Modloader/app/structs/GeneralAsyncDelegate.h>
#include <Modloader/app/structs/GeneralAsyncDelegate__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GeneralAsyncDelegate {
        inline app::GeneralAsyncDelegate__Class** type_info() {
            static app::GeneralAsyncDelegate__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GeneralAsyncDelegate__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GeneralAsyncDelegate__Class* get_class() {
            return il2cpp::get_class<app::GeneralAsyncDelegate__Class>(type_info(), "System.Net", "GeneralAsyncDelegate");
        }
        inline app::GeneralAsyncDelegate* create() {
            return il2cpp::create_object<app::GeneralAsyncDelegate>(get_class());
        }
    } // namespace GeneralAsyncDelegate
} // namespace app::classes::types
