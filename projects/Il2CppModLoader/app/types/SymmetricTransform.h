#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SymmetricTransform {
        namespace {
            inline app::SymmetricTransform__Class* type_info_ref = nullptr;
        }
        inline app::SymmetricTransform__Class** type_info = &type_info_ref;
        inline app::SymmetricTransform__Class* get_class() {
            return il2cpp::get_class<app::SymmetricTransform__Class>(type_info, "Mono.Security.Cryptography", "SymmetricTransform");
        }
        inline app::SymmetricTransform* create() {
            return il2cpp::create_object<app::SymmetricTransform>(get_class());
        }
    } // namespace SymmetricTransform
} // namespace app::classes::types
