#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace OriPredictionHelper_Settings {
        namespace {
            inline app::OriPredictionHelper_Settings__Class* type_info_ref = nullptr;
        }
        inline app::OriPredictionHelper_Settings__Class** type_info = &type_info_ref;
        inline app::OriPredictionHelper_Settings__Class* get_class() {
            return il2cpp::get_nested_class<app::OriPredictionHelper_Settings__Class>(type_info, "Moon", "OriPredictionHelper", "Settings");
        }
        inline app::OriPredictionHelper_Settings* create() {
            return il2cpp::create_object<app::OriPredictionHelper_Settings>(get_class());
        }
    } // namespace OriPredictionHelper_Settings
} // namespace app::classes::types
