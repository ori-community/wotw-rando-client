#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SpringLogic__Class.h>
#include <Modloader/app/structs/SpringLogic.h>

namespace app::classes::types {
    namespace SpringLogic {
        namespace {
            inline app::SpringLogic__Class* type_info_ref = nullptr;
        }
        inline app::SpringLogic__Class** type_info = &type_info_ref;
        inline app::SpringLogic__Class* get_class() {
            return il2cpp::get_class<app::SpringLogic__Class>(type_info, "", "SpringLogic");
        }
        inline app::SpringLogic* create() {
            return il2cpp::create_object<app::SpringLogic>(get_class());
        }
    } // namespace SpringLogic
} // namespace app::classes::types
