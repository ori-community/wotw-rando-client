#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace LandPrediction {
        namespace {
            inline app::LandPrediction__Class* type_info_ref = nullptr;
        }
        inline app::LandPrediction__Class** type_info = &type_info_ref;
        inline app::LandPrediction__Class* get_class() {
            return il2cpp::get_class<app::LandPrediction__Class>(type_info, "", "LandPrediction");
        }
        inline app::LandPrediction* create() {
            return il2cpp::create_object<app::LandPrediction>(get_class());
        }
    } // namespace LandPrediction
} // namespace app::classes::types
