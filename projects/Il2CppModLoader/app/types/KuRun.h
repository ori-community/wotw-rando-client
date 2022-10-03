#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuRun {
        namespace {
            app::KuRun__Class* type_info_ref = nullptr;
        }
        app::KuRun__Class** type_info = &type_info_ref;
        inline app::KuRun__Class* get_class() {
            return il2cpp::get_class<app::KuRun__Class>(type_info, "", "KuRun");
        }
        inline app::KuRun* create() {
            return il2cpp::create_object<app::KuRun>(get_class());
        }
    } // namespace KuRun
} // namespace app::classes::types
