#pragma once
#include <Modloader/app/structs/InteractionObject__Array.h>
#include <Modloader/app/structs/InteractionObject__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionObject__Array {
        inline app::InteractionObject__Array__Class** type_info() {
            static app::InteractionObject__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionObject__Array__Class**)(modloader::win::memory::resolve_rva(0x04733198));
            }
            return cache;
        }
        inline app::InteractionObject__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionObject__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionObject[]");
        }
        inline app::InteractionObject__Array* create() {
            return il2cpp::create_object<app::InteractionObject__Array>(get_class());
        }
    } // namespace InteractionObject__Array
} // namespace app::classes::types
