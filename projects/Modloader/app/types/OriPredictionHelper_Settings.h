#pragma once
#include <Modloader/app/structs/OriPredictionHelper_Settings.h>
#include <Modloader/app/structs/OriPredictionHelper_Settings__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriPredictionHelper_Settings {
        inline app::OriPredictionHelper_Settings__Class** type_info() {
            static app::OriPredictionHelper_Settings__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::OriPredictionHelper_Settings__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::OriPredictionHelper_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::OriPredictionHelper_Settings__Class>(type_info(), "Moon", "OriPredictionHelper", "Settings");
        }
        inline app::OriPredictionHelper_Settings* create() {
            return il2cpp::create_object<app::OriPredictionHelper_Settings>(get_class());
        }
    } // namespace OriPredictionHelper_Settings
} // namespace app::classes::types
