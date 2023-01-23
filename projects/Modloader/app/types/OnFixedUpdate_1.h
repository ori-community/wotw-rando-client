#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnFixedUpdate_1__Class.h>
#include <Modloader/app/structs/OnFixedUpdate_1.h>

namespace app::classes::types {
    namespace OnFixedUpdate_1 {
        namespace {
            inline app::OnFixedUpdate_1__Class* type_info_ref = nullptr;
        }
        inline app::OnFixedUpdate_1__Class** type_info = &type_info_ref;
        inline app::OnFixedUpdate_1__Class* get_class() {
            return il2cpp::get_class<app::OnFixedUpdate_1__Class>(type_info, "fsm.triggers", "OnFixedUpdate");
        }
        inline app::OnFixedUpdate_1* create() {
            return il2cpp::create_object<app::OnFixedUpdate_1>(get_class());
        }
    } // namespace OnFixedUpdate_1
} // namespace app::classes::types
