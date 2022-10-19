#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace FacetsChecker {
        namespace {
            inline app::FacetsChecker__Class* type_info_ref = nullptr;
        }
        inline app::FacetsChecker__Class** type_info = &type_info_ref;
        inline app::FacetsChecker__Class* get_class() {
            return il2cpp::get_class<app::FacetsChecker__Class>(type_info, "System.Xml.Schema", "FacetsChecker");
        }
        inline app::FacetsChecker* create() {
            return il2cpp::create_object<app::FacetsChecker>(get_class());
        }
    } // namespace FacetsChecker
} // namespace app::classes::types
