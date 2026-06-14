#pragma once
#include <Modloader/app/structs/ConditionalDecorator_c.h>
#include <Modloader/app/structs/ConditionalDecorator_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConditionalDecorator_c {
        inline app::ConditionalDecorator_c__Class** type_info() {
            static app::ConditionalDecorator_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConditionalDecorator_c__Class**)(modloader::win::memory::resolve_rva(0x0472AF90));
            }
            return cache;
        }
        inline app::ConditionalDecorator_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ConditionalDecorator_c__Class>(type_info(), "Moon.BehaviourSystem", "ConditionalDecorator", "<>c");
        }
        inline app::ConditionalDecorator_c* create() {
            return il2cpp::create_object<app::ConditionalDecorator_c>(get_class());
        }
    } // namespace ConditionalDecorator_c
} // namespace app::classes::types
