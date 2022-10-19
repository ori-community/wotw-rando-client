#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace ExpandoObjectConverter {
        inline app::ExpandoObjectConverter__Class** type_info = (app::ExpandoObjectConverter__Class**)(modloader::win::memory::resolve_rva(0x0478B2E8));
        inline app::ExpandoObjectConverter__Class* get_class() {
            return il2cpp::get_class<app::ExpandoObjectConverter__Class>(type_info, "Newtonsoft.Json.Converters", "ExpandoObjectConverter");
        }
        inline app::ExpandoObjectConverter* create() {
            return il2cpp::create_object<app::ExpandoObjectConverter>(get_class());
        }
    } // namespace ExpandoObjectConverter
} // namespace app::classes::types
