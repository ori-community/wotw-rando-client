#pragma once
#include <Modloader/app/structs/ShrineCombat_States.h>
#include <Modloader/app/structs/ShrineCombat_States__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShrineCombat_States {
        inline app::ShrineCombat_States__Class** type_info() {
            static app::ShrineCombat_States__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShrineCombat_States__Class**)(modloader::win::memory::resolve_rva(0x0478B720));
            }
            return cache;
        }
        inline app::ShrineCombat_States__Class* get_class() {
            return il2cpp::get_nested_class<app::ShrineCombat_States__Class>(type_info(), "", "ShrineCombat", "States");
        }
        inline app::ShrineCombat_States* create() {
            return il2cpp::create_object<app::ShrineCombat_States>(get_class());
        }
    } // namespace ShrineCombat_States
} // namespace app::classes::types
