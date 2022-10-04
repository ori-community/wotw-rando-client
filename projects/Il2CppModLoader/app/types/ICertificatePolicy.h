#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ICertificatePolicy {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ICertificatePolicy__Class** type_info;
        inline app::ICertificatePolicy__Class* get_class() {
            return il2cpp::get_class<app::ICertificatePolicy__Class>(type_info, "System.Net", "ICertificatePolicy");
        }
        inline app::ICertificatePolicy* create() {
            return il2cpp::create_object<app::ICertificatePolicy>(get_class());
        }
    } // namespace ICertificatePolicy
} // namespace app::classes::types
