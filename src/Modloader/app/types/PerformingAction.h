#pragma once
#include <Modloader/app/structs/PerformingAction.h>
#include <Modloader/app/structs/PerformingAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformingAction {
        inline app::PerformingAction__Class** type_info() {
            static app::PerformingAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformingAction__Class**)(modloader::win::memory::resolve_rva(0x04740B68));
            }
            return cache;
        }
        inline app::PerformingAction__Class* get_class() {
            return il2cpp::get_class<app::PerformingAction__Class>(type_info(), "", "PerformingAction");
        }
        inline app::PerformingAction* create() {
            return il2cpp::create_object<app::PerformingAction>(get_class());
        }
    } // namespace PerformingAction
} // namespace app::classes::types
