#pragma once
#include <Modloader/app/structs/LandPrediction.h>
#include <Modloader/app/structs/LandPrediction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LandPrediction {
        inline app::LandPrediction__Class** type_info() {
            static app::LandPrediction__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::LandPrediction__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::LandPrediction__Class* get_class() {
            return il2cpp::get_class<app::LandPrediction__Class>(type_info(), "", "LandPrediction");
        }
        inline app::LandPrediction* create() {
            return il2cpp::create_object<app::LandPrediction>(get_class());
        }
    } // namespace LandPrediction
} // namespace app::classes::types
