#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace KeyUsageExtension {
        extern IL2CPP_MODLOADER_DLLEXPORT app::KeyUsageExtension__Class** type_info;
        inline app::KeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::KeyUsageExtension__Class>(type_info, "Mono.Security.X509.Extensions", "KeyUsageExtension");
        }
        inline app::KeyUsageExtension* create() {
            return il2cpp::create_object<app::KeyUsageExtension>(get_class());
        }
    } // namespace KeyUsageExtension
} // namespace app::classes::types
