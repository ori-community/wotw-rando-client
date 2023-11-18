#pragma once
#include <Modloader/app/structs/X509Utils.h>
#include <Modloader/app/structs/X509Utils__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Utils {
        inline app::X509Utils__Class** type_info() {
            static app::X509Utils__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X509Utils__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X509Utils__Class* get_class() {
            return il2cpp::get_class<app::X509Utils__Class>(type_info(), "System.Security.Cryptography.X509Certificates", "X509Utils");
        }
        inline app::X509Utils* create() {
            return il2cpp::create_object<app::X509Utils>(get_class());
        }
    } // namespace X509Utils
} // namespace app::classes::types
