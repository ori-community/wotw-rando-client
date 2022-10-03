#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KuLookUp {
        namespace {
            app::KuLookUp__Class* type_info_ref = nullptr;
        }
        app::KuLookUp__Class** type_info = &type_info_ref;
        inline app::KuLookUp__Class* get_class() {
            return il2cpp::get_class<app::KuLookUp__Class>(type_info, "", "KuLookUp");
        }
        inline app::KuLookUp* create() {
            return il2cpp::create_object<app::KuLookUp>(get_class());
        }
    } // namespace KuLookUp
} // namespace app::classes::types
