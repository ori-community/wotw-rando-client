#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MoonReferenceValidator {
        inline app::MoonReferenceValidator__Class** type_info = (app::MoonReferenceValidator__Class**)(modloader::win::memory::resolve_rva(0x0477B238));
        inline app::MoonReferenceValidator__Class* get_class() {
            return il2cpp::get_class<app::MoonReferenceValidator__Class>(type_info, "Moon", "MoonReferenceValidator");
        }
        inline app::MoonReferenceValidator* create() {
            return il2cpp::create_object<app::MoonReferenceValidator>(get_class());
        }
    } // namespace MoonReferenceValidator
} // namespace app::classes::types
