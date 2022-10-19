#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace KeyUsageExtension {
        inline app::KeyUsageExtension__Class** type_info = (app::KeyUsageExtension__Class**)(modloader::win::memory::resolve_rva(0x04775568));
        inline app::KeyUsageExtension__Class* get_class() {
            return il2cpp::get_class<app::KeyUsageExtension__Class>(type_info, "Mono.Security.X509.Extensions", "KeyUsageExtension");
        }
        inline app::KeyUsageExtension* create() {
            return il2cpp::create_object<app::KeyUsageExtension>(get_class());
        }
    } // namespace KeyUsageExtension
} // namespace app::classes::types
