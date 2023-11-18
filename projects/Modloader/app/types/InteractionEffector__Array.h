#pragma once
#include <Modloader/app/structs/InteractionEffector__Array.h>
#include <Modloader/app/structs/InteractionEffector__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionEffector__Array {
        inline app::InteractionEffector__Array__Class** type_info() {
            static app::InteractionEffector__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionEffector__Array__Class**)(modloader::win::memory::resolve_rva(0x047474A0));
            }
            return cache;
        }
        inline app::InteractionEffector__Array__Class* get_class() {
            return il2cpp::get_class<app::InteractionEffector__Array__Class>(type_info(), "RootMotion.FinalIK", "InteractionEffector[]");
        }
        inline app::InteractionEffector__Array* create() {
            return il2cpp::create_object<app::InteractionEffector__Array>(get_class());
        }
    } // namespace InteractionEffector__Array
} // namespace app::classes::types
