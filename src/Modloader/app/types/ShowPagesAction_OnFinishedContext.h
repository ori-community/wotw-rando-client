#pragma once
#include <Modloader/app/structs/ShowPagesAction_OnFinishedContext.h>
#include <Modloader/app/structs/ShowPagesAction_OnFinishedContext__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowPagesAction_OnFinishedContext {
        inline app::ShowPagesAction_OnFinishedContext__Class** type_info() {
            static app::ShowPagesAction_OnFinishedContext__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShowPagesAction_OnFinishedContext__Class**)(modloader::win::memory::resolve_rva(0x04733388));
            }
            return cache;
        }
        inline app::ShowPagesAction_OnFinishedContext__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowPagesAction_OnFinishedContext__Class>(type_info(), "", "ShowPagesAction", "OnFinishedContext");
        }
        inline app::ShowPagesAction_OnFinishedContext* create() {
            return il2cpp::create_object<app::ShowPagesAction_OnFinishedContext>(get_class());
        }
    } // namespace ShowPagesAction_OnFinishedContext
} // namespace app::classes::types
