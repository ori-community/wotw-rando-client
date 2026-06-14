#pragma once
#include <Modloader/app/structs/ActionDecorator_c.h>
#include <Modloader/app/structs/ActionDecorator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ActionDecorator_c {
        inline app::ActionDecorator_c__Class** type_info() {
            static app::ActionDecorator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ActionDecorator_c__Class**)(modloader::win::memory::resolve_rva(0x047482E0));
            }
            return cache;
        }
        inline app::ActionDecorator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ActionDecorator_c__Class>(type_info(), "Moon.BehaviourSystem", "ActionDecorator", "<>c");
        }
        inline app::ActionDecorator_c* create() {
            return il2cpp::create_object<app::ActionDecorator_c>(get_class());
        }
    } // namespace ActionDecorator_c
} // namespace app::classes::types
