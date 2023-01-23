#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnityAction__Class.h>
#include <Modloader/app/structs/UnityAction.h>

namespace app::classes::types {
    namespace UnityAction {
        inline app::UnityAction__Class** type_info = (app::UnityAction__Class**)(modloader::win::memory::resolve_rva(0x047787A8));
        inline app::UnityAction__Class* get_class() {
            return il2cpp::get_class<app::UnityAction__Class>(type_info, "UnityEngine.Events", "UnityAction");
        }
        inline app::UnityAction* create() {
            return il2cpp::create_object<app::UnityAction>(get_class());
        }
    } // namespace UnityAction
} // namespace app::classes::types
