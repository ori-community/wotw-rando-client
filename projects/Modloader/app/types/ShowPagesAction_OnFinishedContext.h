#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ShowPagesAction_OnFinishedContext {
        inline app::ShowPagesAction_OnFinishedContext__Class** type_info = (app::ShowPagesAction_OnFinishedContext__Class**)(modloader::win::memory::resolve_rva(0x04733388));
        inline app::ShowPagesAction_OnFinishedContext__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowPagesAction_OnFinishedContext__Class>(type_info, "", "ShowPagesAction", "OnFinishedContext");
        }
        inline app::ShowPagesAction_OnFinishedContext* create() {
            return il2cpp::create_object<app::ShowPagesAction_OnFinishedContext>(get_class());
        }
    } // namespace ShowPagesAction_OnFinishedContext
} // namespace app::classes::types
