#pragma once
#include <Modloader/app/structs/OriPredictionHelper.h>
#include <Modloader/app/structs/OriPredictionHelper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace OriPredictionHelper {
        inline app::OriPredictionHelper__Class** type_info() {
            static app::OriPredictionHelper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::OriPredictionHelper__Class**)(modloader::win::memory::resolve_rva(0x0475A6C8));
            }
            return cache;
        }
        inline app::OriPredictionHelper__Class* get_class() {
            return il2cpp::get_class<app::OriPredictionHelper__Class>(type_info(), "Moon", "OriPredictionHelper");
        }
        inline app::OriPredictionHelper* create() {
            return il2cpp::create_object<app::OriPredictionHelper>(get_class());
        }
    } // namespace OriPredictionHelper
} // namespace app::classes::types
