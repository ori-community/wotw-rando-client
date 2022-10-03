#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuDashPuppet {
        namespace {
            app::KuDashPuppet__Class* type_info_ref = nullptr;
        }
        app::KuDashPuppet__Class** type_info = &type_info_ref;
        inline app::KuDashPuppet__Class* get_class() {
            return il2cpp::get_class<app::KuDashPuppet__Class>(type_info, "", "KuDashPuppet");
        }
        inline app::KuDashPuppet* create() {
            return il2cpp::create_object<app::KuDashPuppet>(get_class());
        }
    } // namespace KuDashPuppet
} // namespace app::classes::types
