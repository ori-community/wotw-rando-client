#pragma once
#include <Modloader/app/structs/MaskGenerationMethod.h>
#include <Modloader/app/structs/MaskGenerationMethod__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MaskGenerationMethod {
        inline app::MaskGenerationMethod__Class** type_info() {
            static app::MaskGenerationMethod__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MaskGenerationMethod__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MaskGenerationMethod__Class* get_class() {
            return il2cpp::get_class<app::MaskGenerationMethod__Class>(type_info(), "System.Security.Cryptography", "MaskGenerationMethod");
        }
        inline app::MaskGenerationMethod* create() {
            return il2cpp::create_object<app::MaskGenerationMethod>(get_class());
        }
    } // namespace MaskGenerationMethod
} // namespace app::classes::types
