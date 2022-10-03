#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriPredictionHelper {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OriPredictionHelper__Class** type_info;
        inline app::OriPredictionHelper__Class* get_class() {
            return il2cpp::get_class<app::OriPredictionHelper__Class>(type_info, "Moon", "OriPredictionHelper");
        }
        inline app::OriPredictionHelper* create() {
            return il2cpp::create_object<app::OriPredictionHelper>(get_class());
        }
    } // namespace OriPredictionHelper
} // namespace app::classes::types
