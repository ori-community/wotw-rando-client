#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace OriPositionPrediction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::OriPositionPrediction__Class** type_info;
        inline app::OriPositionPrediction__Class* get_class() {
            return il2cpp::get_class<app::OriPositionPrediction__Class>(type_info, "", "OriPositionPrediction");
        }
        inline app::OriPositionPrediction* create() {
            return il2cpp::create_object<app::OriPositionPrediction>(get_class());
        }
    } // namespace OriPositionPrediction
} // namespace app::classes::types
