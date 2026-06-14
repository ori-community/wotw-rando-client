#pragma once
#include <Modloader/app/structs/WotwUberStateWwiseStateManager.h>
#include <Modloader/app/structs/WotwUberStateWwiseStateManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WotwUberStateWwiseStateManager {
        inline app::WotwUberStateWwiseStateManager__Class** type_info() {
            static app::WotwUberStateWwiseStateManager__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WotwUberStateWwiseStateManager__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WotwUberStateWwiseStateManager__Class* get_class() {
            return il2cpp::get_class<app::WotwUberStateWwiseStateManager__Class>(type_info(), "", "WotwUberStateWwiseStateManager");
        }
        inline app::WotwUberStateWwiseStateManager* create() {
            return il2cpp::create_object<app::WotwUberStateWwiseStateManager>(get_class());
        }
    } // namespace WotwUberStateWwiseStateManager
} // namespace app::classes::types
