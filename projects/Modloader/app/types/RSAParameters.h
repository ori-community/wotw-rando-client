#pragma once
#include <Modloader/app/structs/RSAParameters.h>
#include <Modloader/app/structs/RSAParameters__Boxed.h>
#include <Modloader/app/structs/RSAParameters__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RSAParameters {
        inline app::RSAParameters__Class** type_info() {
            static app::RSAParameters__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RSAParameters__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RSAParameters__Class* get_class() {
            return il2cpp::get_class<app::RSAParameters__Class>(type_info(), "System.Security.Cryptography", "RSAParameters");
        }
        inline app::RSAParameters* create() {
            return il2cpp::create_object<app::RSAParameters>(get_class());
        }
        inline app::RSAParameters__Boxed* box(app::RSAParameters value) {
            return il2cpp::box_value<app::RSAParameters__Boxed>(get_class(), value);
        }
    } // namespace RSAParameters
} // namespace app::classes::types
