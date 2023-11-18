#pragma once
#include <Modloader/app/structs/SymmetricTransform.h>
#include <Modloader/app/structs/SymmetricTransform__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SymmetricTransform {
        inline app::SymmetricTransform__Class** type_info() {
            static app::SymmetricTransform__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SymmetricTransform__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SymmetricTransform__Class* get_class() {
            return il2cpp::get_class<app::SymmetricTransform__Class>(type_info(), "Mono.Security.Cryptography", "SymmetricTransform");
        }
        inline app::SymmetricTransform* create() {
            return il2cpp::create_object<app::SymmetricTransform>(get_class());
        }
    } // namespace SymmetricTransform
} // namespace app::classes::types
