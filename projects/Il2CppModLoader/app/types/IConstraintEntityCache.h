#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IConstraintEntityCache {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IConstraintEntityCache__Class** type_info;
        inline app::IConstraintEntityCache__Class* get_class() {
            return il2cpp::get_class<app::IConstraintEntityCache__Class>(type_info, "Moon.Timeline.Constraints", "IConstraintEntityCache");
        }
        inline app::IConstraintEntityCache* create() {
            return il2cpp::create_object<app::IConstraintEntityCache>(get_class());
        }
    } // namespace IConstraintEntityCache
} // namespace app::classes::types
