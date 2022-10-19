#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace DateTimeFacetsChecker {
        inline app::DateTimeFacetsChecker__Class** type_info = (app::DateTimeFacetsChecker__Class**)(modloader::win::memory::resolve_rva(0x04756608));
        inline app::DateTimeFacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::DateTimeFacetsChecker__Class>(type_info, "System.Xml.Schema", "DateTimeFacetsChecker");
        }
        inline app::DateTimeFacetsChecker* create() {
            return il2cpp::create_object<app::DateTimeFacetsChecker>(get_class());
        }
    } // namespace DateTimeFacetsChecker
} // namespace app::classes::types
