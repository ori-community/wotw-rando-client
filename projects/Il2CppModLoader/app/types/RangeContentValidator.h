#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RangeContentValidator {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RangeContentValidator__Class** type_info;
        inline app::RangeContentValidator__Class* get_class() {
            return il2cpp::get_class<app::RangeContentValidator__Class>(type_info, "System.Xml.Schema", "RangeContentValidator");
        }
        inline app::RangeContentValidator* create() {
            return il2cpp::create_object<app::RangeContentValidator>(get_class());
        }
    } // namespace RangeContentValidator
} // namespace app::classes::types
