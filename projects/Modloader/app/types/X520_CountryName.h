#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace X520_CountryName {
        inline app::X520_CountryName__Class** type_info = (app::X520_CountryName__Class**)(modloader::win::memory::resolve_rva(0x04792C10));
        inline app::X520_CountryName__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_CountryName__Class>(type_info, "Mono.Security.X509", "X520", "CountryName");
        }
        inline app::X520_CountryName* create() {
            return il2cpp::create_object<app::X520_CountryName>(get_class());
        }
    } // namespace X520_CountryName
} // namespace app::classes::types
