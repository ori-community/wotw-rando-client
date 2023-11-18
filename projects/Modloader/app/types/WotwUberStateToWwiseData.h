#pragma once
#include <Modloader/app/structs/WotwUberStateToWwiseData.h>
#include <Modloader/app/structs/WotwUberStateToWwiseData__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateToWwiseData {
        inline app::WotwUberStateToWwiseData__Class** type_info() {
            static app::WotwUberStateToWwiseData__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WotwUberStateToWwiseData__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WotwUberStateToWwiseData__Class* get_class() {
            return il2cpp::get_class<app::WotwUberStateToWwiseData__Class>(type_info(), "", "WotwUberStateToWwiseData");
        }
        inline app::WotwUberStateToWwiseData* create() {
            return il2cpp::create_object<app::WotwUberStateToWwiseData>(get_class());
        }
    } // namespace WotwUberStateToWwiseData
} // namespace app::classes::types
