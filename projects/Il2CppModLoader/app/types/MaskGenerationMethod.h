#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MaskGenerationMethod {
        namespace {
            app::MaskGenerationMethod__Class* type_info_ref = nullptr;
        }
        app::MaskGenerationMethod__Class** type_info = &type_info_ref;
        inline app::MaskGenerationMethod__Class* get_class() {
            return il2cpp::get_class<app::MaskGenerationMethod__Class>(type_info, "System.Security.Cryptography", "MaskGenerationMethod");
        }
        inline app::MaskGenerationMethod* create() {
            return il2cpp::create_object<app::MaskGenerationMethod>(get_class());
        }
    } // namespace MaskGenerationMethod
} // namespace app::classes::types
