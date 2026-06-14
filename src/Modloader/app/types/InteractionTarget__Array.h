#pragma once
#include <Modloader/app/structs/InteractionTarget__Array.h>
#include <Modloader/app/structs/InteractionTarget__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionTarget__Array {
        inline app::InteractionTarget__Array__Class** type_info() {
            static app::InteractionTarget__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionTarget__Array__Class**)(modloader::win::memory::resolve_rva(0x0473D8F8));
            }
            return cache;
        }
        inline app::InteractionTarget__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionTarget__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionTarget[]");
        }
        inline app::InteractionTarget__Array* create() {
            return il2cpp::create_object<app::InteractionTarget__Array>(get_class());
        }
    } // namespace InteractionTarget__Array
} // namespace app::classes::types
