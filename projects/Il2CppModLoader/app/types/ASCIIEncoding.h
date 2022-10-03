#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ASCIIEncoding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ASCIIEncoding__Class** type_info;
        inline app::ASCIIEncoding__Class* get_class() {
            return il2cpp::get_class<app::ASCIIEncoding__Class>(type_info, "System.Text", "ASCIIEncoding");
        }
        inline app::ASCIIEncoding* create() {
            return il2cpp::create_object<app::ASCIIEncoding>(get_class());
        }
    } // namespace ASCIIEncoding
} // namespace app::classes::types
