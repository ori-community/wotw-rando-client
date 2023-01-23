#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UnlockFullGameLogic__Class.h>
#include <Modloader/app/structs/UnlockFullGameLogic.h>

namespace app::classes::types {
    namespace UnlockFullGameLogic {
        namespace {
            inline app::UnlockFullGameLogic__Class* type_info_ref = nullptr;
        }
        inline app::UnlockFullGameLogic__Class** type_info = &type_info_ref;
        inline app::UnlockFullGameLogic__Class* get_class() {
            return il2cpp::get_class<app::UnlockFullGameLogic__Class>(type_info, "", "UnlockFullGameLogic");
        }
        inline app::UnlockFullGameLogic* create() {
            return il2cpp::create_object<app::UnlockFullGameLogic>(get_class());
        }
    } // namespace UnlockFullGameLogic
} // namespace app::classes::types
