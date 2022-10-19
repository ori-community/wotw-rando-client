#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace CultureData {
        inline app::CultureData__Class** type_info = (app::CultureData__Class**)(modloader::win::memory::resolve_rva(0x04758E60));
        inline app::CultureData__Class* get_class() {
            return il2cpp::get_class<app::CultureData__Class>(type_info, "System.Globalization", "CultureData");
        }
        inline app::CultureData* create() {
            return il2cpp::create_object<app::CultureData>(get_class());
        }
    } // namespace CultureData
} // namespace app::classes::types
