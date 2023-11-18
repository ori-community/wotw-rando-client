#pragma once
#include <Modloader/app/structs/AutomationRunWrapper.h>
#include <Modloader/app/structs/AutomationRunWrapper__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutomationRunWrapper {
        inline app::AutomationRunWrapper__Class** type_info() {
            static app::AutomationRunWrapper__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutomationRunWrapper__Class**)(modloader::win::memory::resolve_rva(0x04772AB0));
            }
            return cache;
        }
        inline app::AutomationRunWrapper__Class* get_class() {
            return il2cpp::get_class<app::AutomationRunWrapper__Class>(type_info(), "", "AutomationRunWrapper");
        }
        inline app::AutomationRunWrapper* create() {
            return il2cpp::create_object<app::AutomationRunWrapper>(get_class());
        }
    } // namespace AutomationRunWrapper
} // namespace app::classes::types
