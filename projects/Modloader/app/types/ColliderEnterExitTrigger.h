#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColliderEnterExitTrigger__Class.h>
#include <Modloader/app/structs/ColliderEnterExitTrigger.h>

namespace app::classes::types {
    namespace ColliderEnterExitTrigger {
        namespace {
            inline app::ColliderEnterExitTrigger__Class* type_info_ref = nullptr;
        }
        inline app::ColliderEnterExitTrigger__Class** type_info = &type_info_ref;
        inline app::ColliderEnterExitTrigger__Class* get_class() {
            return il2cpp::get_class<app::ColliderEnterExitTrigger__Class>(type_info, "", "ColliderEnterExitTrigger");
        }
        inline app::ColliderEnterExitTrigger* create() {
            return il2cpp::create_object<app::ColliderEnterExitTrigger>(get_class());
        }
    } // namespace ColliderEnterExitTrigger
} // namespace app::classes::types
