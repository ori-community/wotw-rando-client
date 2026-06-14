#pragma once
#include <Modloader/app/structs/UberStateWwiseStateManager.h>
#include <Modloader/app/structs/UberStateWwiseStateManager__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberStateWwiseStateManager {
        inline app::UberStateWwiseStateManager__Class** type_info() {
            static app::UberStateWwiseStateManager__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberStateWwiseStateManager__Class**)(modloader::win::memory::resolve_rva(0x047630E8));
            }
            return cache;
        }
        inline app::UberStateWwiseStateManager__Class* get_class() {
            return il2cpp::get_class<app::UberStateWwiseStateManager__Class>(type_info(), "Moon.Wwise", "UberStateWwiseStateManager");
        }
        inline app::UberStateWwiseStateManager* create() {
            return il2cpp::create_object<app::UberStateWwiseStateManager>(get_class());
        }
    } // namespace UberStateWwiseStateManager
} // namespace app::classes::types
