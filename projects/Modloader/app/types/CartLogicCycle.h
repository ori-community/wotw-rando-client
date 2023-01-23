#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CartLogicCycle__Class.h>
#include <Modloader/app/structs/CartLogicCycle.h>

namespace app::classes::types {
    namespace CartLogicCycle {
        namespace {
            inline app::CartLogicCycle__Class* type_info_ref = nullptr;
        }
        inline app::CartLogicCycle__Class** type_info = &type_info_ref;
        inline app::CartLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::CartLogicCycle__Class>(type_info, "", "CartLogicCycle");
        }
        inline app::CartLogicCycle* create() {
            return il2cpp::create_object<app::CartLogicCycle>(get_class());
        }
    } // namespace CartLogicCycle
} // namespace app::classes::types
