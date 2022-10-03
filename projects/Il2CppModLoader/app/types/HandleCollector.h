#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HandleCollector {
        namespace {
            app::HandleCollector__Class* type_info_ref = nullptr;
        }
        app::HandleCollector__Class** type_info = &type_info_ref;
        inline app::HandleCollector__Class* get_class() {
            return il2cpp::get_class<app::HandleCollector__Class>(type_info, "System.Runtime.InteropServices", "HandleCollector");
        }
        inline app::HandleCollector* create() {
            return il2cpp::create_object<app::HandleCollector>(get_class());
        }
    } // namespace HandleCollector
} // namespace app::classes::types
