#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace RegexConverter {
        inline app::RegexConverter__Class** type_info = (app::RegexConverter__Class**)(modloader::win::memory::resolve_rva(0x047348F8));
        inline app::RegexConverter__Class* get_class() {
            return il2cpp::get_class<app::RegexConverter__Class>(type_info, "Newtonsoft.Json.Converters", "RegexConverter");
        }
        inline app::RegexConverter* create() {
            return il2cpp::create_object<app::RegexConverter>(get_class());
        }
    } // namespace RegexConverter
} // namespace app::classes::types
