#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace InstantiateAction {
        inline app::InstantiateAction__Class** type_info = (app::InstantiateAction__Class**)(modloader::win::memory::resolve_rva(0x04762478));
        inline app::InstantiateAction__Class* get_class() {
            return il2cpp::get_class<app::InstantiateAction__Class>(type_info, "", "InstantiateAction");
        }
        inline app::InstantiateAction* create() {
            return il2cpp::create_object<app::InstantiateAction>(get_class());
        }
    } // namespace InstantiateAction
} // namespace app::classes::types
