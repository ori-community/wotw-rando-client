#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OnSeinNearEnter__Class.h>
#include <Modloader/app/structs/OnSeinNearEnter.h>

namespace app::classes::types {
    namespace OnSeinNearEnter {
        namespace {
            inline app::OnSeinNearEnter__Class* type_info_ref = nullptr;
        }
        inline app::OnSeinNearEnter__Class** type_info = &type_info_ref;
        inline app::OnSeinNearEnter__Class* get_class() {
            return il2cpp::get_class<app::OnSeinNearEnter__Class>(type_info, "fsm.triggers", "OnSeinNearEnter");
        }
        inline app::OnSeinNearEnter* create() {
            return il2cpp::create_object<app::OnSeinNearEnter>(get_class());
        }
    } // namespace OnSeinNearEnter
} // namespace app::classes::types
