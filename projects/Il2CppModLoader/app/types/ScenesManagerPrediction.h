#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ScenesManagerPrediction {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ScenesManagerPrediction__Class** type_info;
        inline app::ScenesManagerPrediction__Class* get_class() {
            return il2cpp::get_class<app::ScenesManagerPrediction__Class>(type_info, "", "ScenesManagerPrediction");
        }
        inline app::ScenesManagerPrediction* create() {
            return il2cpp::create_object<app::ScenesManagerPrediction>(get_class());
        }
    } // namespace ScenesManagerPrediction
} // namespace app::classes::types
