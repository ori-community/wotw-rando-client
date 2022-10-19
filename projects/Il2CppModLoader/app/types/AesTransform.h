#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace AesTransform {
        inline app::AesTransform__Class** type_info = (app::AesTransform__Class**)(modloader::win::memory::resolve_rva(0x0474F458));
        inline app::AesTransform__Class* get_class() {
            return il2cpp::get_class<app::AesTransform__Class>(type_info, "System.Security.Cryptography", "AesTransform");
        }
        inline app::AesTransform* create() {
            return il2cpp::create_object<app::AesTransform>(get_class());
        }
    } // namespace AesTransform
} // namespace app::classes::types
