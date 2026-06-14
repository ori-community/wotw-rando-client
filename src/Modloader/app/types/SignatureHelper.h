#pragma once
#include <Modloader/app/structs/SignatureHelper.h>
#include <Modloader/app/structs/SignatureHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SignatureHelper {
        inline app::SignatureHelper__Class** type_info() {
            static app::SignatureHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SignatureHelper__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SignatureHelper__Class* get_class() {
            return il2cpp::get_class<app::SignatureHelper__Class>(type_info(), "System.Reflection.Emit", "SignatureHelper");
        }
        inline app::SignatureHelper* create() {
            return il2cpp::create_object<app::SignatureHelper>(get_class());
        }
    } // namespace SignatureHelper
} // namespace app::classes::types
