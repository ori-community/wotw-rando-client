#pragma once
#include <Modloader/app/structs/UberStateToWwiseData.h>
#include <Modloader/app/structs/UberStateToWwiseData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateToWwiseData {
        inline app::UberStateToWwiseData__Class** type_info() {
            static app::UberStateToWwiseData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberStateToWwiseData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberStateToWwiseData__Class* get_class() {
            return il2cpp::get_class<app::UberStateToWwiseData__Class>(type_info(), "Moon.Wwise", "UberStateToWwiseData");
        }
        inline app::UberStateToWwiseData* create() {
            return il2cpp::create_object<app::UberStateToWwiseData>(get_class());
        }
    } // namespace UberStateToWwiseData
} // namespace app::classes::types
