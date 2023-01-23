#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DashNewComboMove__Class.h>
#include <Modloader/app/structs/DashNewComboMove.h>

namespace app::classes::types {
    namespace DashNewComboMove {
        namespace {
            inline app::DashNewComboMove__Class* type_info_ref = nullptr;
        }
        inline app::DashNewComboMove__Class** type_info = &type_info_ref;
        inline app::DashNewComboMove__Class* get_class() {
            return il2cpp::get_class<app::DashNewComboMove__Class>(type_info, "Moon.ComboSystem", "DashNewComboMove");
        }
        inline app::DashNewComboMove* create() {
            return il2cpp::create_object<app::DashNewComboMove>(get_class());
        }
    } // namespace DashNewComboMove
} // namespace app::classes::types
