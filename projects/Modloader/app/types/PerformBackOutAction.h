#pragma once
#include <Modloader/app/structs/PerformBackOutAction.h>
#include <Modloader/app/structs/PerformBackOutAction__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PerformBackOutAction {
        inline app::PerformBackOutAction__Class** type_info() {
            static app::PerformBackOutAction__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::PerformBackOutAction__Class**)(modloader::win::memory::resolve_rva(0x0473A428));
            }
            return cache;
        }
        inline app::PerformBackOutAction__Class* get_class() {
            return il2cpp::get_class<app::PerformBackOutAction__Class>(type_info(), "", "PerformBackOutAction");
        }
        inline app::PerformBackOutAction* create() {
            return il2cpp::create_object<app::PerformBackOutAction>(get_class());
        }
    } // namespace PerformBackOutAction
} // namespace app::classes::types
