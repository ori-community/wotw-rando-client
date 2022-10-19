#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DSAParameters {
        namespace {
            inline app::DSAParameters__Class* type_info_ref = nullptr;
        }
        inline app::DSAParameters__Class** type_info = &type_info_ref;
        inline app::DSAParameters__Class* get_class() {
            return il2cpp::get_class<app::DSAParameters__Class>(type_info, "System.Security.Cryptography", "DSAParameters");
        }
        inline app::DSAParameters* create() {
            return il2cpp::create_object<app::DSAParameters>(get_class());
        }
        inline app::DSAParameters__Boxed* box(app::DSAParameters value) {
            return il2cpp::box_value<app::DSAParameters__Boxed>(get_class(), value);
        }
    } // namespace DSAParameters
} // namespace app::classes::types
