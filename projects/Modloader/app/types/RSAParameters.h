#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RSAParameters {
        namespace {
            inline app::RSAParameters__Class* type_info_ref = nullptr;
        }
        inline app::RSAParameters__Class** type_info = &type_info_ref;
        inline app::RSAParameters__Class* get_class() {
            return il2cpp::get_class<app::RSAParameters__Class>(type_info, "System.Security.Cryptography", "RSAParameters");
        }
        inline app::RSAParameters* create() {
            return il2cpp::create_object<app::RSAParameters>(get_class());
        }
        inline app::RSAParameters__Boxed* box(app::RSAParameters value) {
            return il2cpp::box_value<app::RSAParameters__Boxed>(get_class(), value);
        }
    } // namespace RSAParameters
} // namespace app::classes::types
