#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AllElementsContentValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AllElementsContentValidator__Class** type_info;
        inline app::AllElementsContentValidator__Class* get_class() {
            return il2cpp::get_class<app::AllElementsContentValidator__Class>(type_info, "System.Xml.Schema", "AllElementsContentValidator");
        }
        inline app::AllElementsContentValidator* create() {
            return il2cpp::create_object<app::AllElementsContentValidator>(get_class());
        }
    } // namespace AllElementsContentValidator
} // namespace app::classes::types
