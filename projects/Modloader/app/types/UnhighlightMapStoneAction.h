#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnhighlightMapStoneAction__Class.h>
#include <Modloader/app/structs/UnhighlightMapStoneAction.h>

namespace app::classes::types {
    namespace UnhighlightMapStoneAction {
        namespace {
            inline app::UnhighlightMapStoneAction__Class* type_info_ref = nullptr;
        }
        inline app::UnhighlightMapStoneAction__Class** type_info = &type_info_ref;
        inline app::UnhighlightMapStoneAction__Class* get_class() {
            return il2cpp::get_class<app::UnhighlightMapStoneAction__Class>(type_info, "", "UnhighlightMapStoneAction");
        }
        inline app::UnhighlightMapStoneAction* create() {
            return il2cpp::create_object<app::UnhighlightMapStoneAction>(get_class());
        }
    } // namespace UnhighlightMapStoneAction
} // namespace app::classes::types
