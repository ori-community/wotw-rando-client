#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ASCIIEncoding {
        inline app::ASCIIEncoding__Class** type_info = (app::ASCIIEncoding__Class**)(modloader::win::memory::resolve_rva(0x04767970));
        inline app::ASCIIEncoding__Class* get_class() {
            return il2cpp::get_class<app::ASCIIEncoding__Class>(type_info, "System.Text", "ASCIIEncoding");
        }
        inline app::ASCIIEncoding* create() {
            return il2cpp::create_object<app::ASCIIEncoding>(get_class());
        }
    } // namespace ASCIIEncoding
} // namespace app::classes::types
