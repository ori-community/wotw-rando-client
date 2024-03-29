#pragma once
#include <Modloader/app/structs/ShowInventoryAction_c.h>
#include <Modloader/app/structs/ShowInventoryAction_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowInventoryAction_c {
        inline app::ShowInventoryAction_c__Class** type_info() {
            static app::ShowInventoryAction_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShowInventoryAction_c__Class**)(modloader::win::memory::resolve_rva(0x04722588));
            }
            return cache;
        }
        inline app::ShowInventoryAction_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowInventoryAction_c__Class>(type_info(), "", "ShowInventoryAction", "<>c");
        }
        inline app::ShowInventoryAction_c* create() {
            return il2cpp::create_object<app::ShowInventoryAction_c>(get_class());
        }
    } // namespace ShowInventoryAction_c
} // namespace app::classes::types
