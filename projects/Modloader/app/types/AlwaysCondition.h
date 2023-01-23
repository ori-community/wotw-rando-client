#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AlwaysCondition__Class.h>
#include <Modloader/app/structs/AlwaysCondition.h>

namespace app::classes::types {
    namespace AlwaysCondition {
        namespace {
            inline app::AlwaysCondition__Class* type_info_ref = nullptr;
        }
        inline app::AlwaysCondition__Class** type_info = &type_info_ref;
        inline app::AlwaysCondition__Class* get_class() {
            return il2cpp::get_class<app::AlwaysCondition__Class>(type_info, "fsm", "AlwaysCondition");
        }
        inline app::AlwaysCondition* create() {
            return il2cpp::create_object<app::AlwaysCondition>(get_class());
        }
    } // namespace AlwaysCondition
} // namespace app::classes::types
