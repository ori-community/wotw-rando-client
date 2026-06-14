#pragma once
#include <Modloader/app/structs/InteractionBinding.h>
#include <Modloader/app/structs/InteractionBinding__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionBinding {
        inline app::InteractionBinding__Class** type_info() {
            static app::InteractionBinding__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionBinding__Class**)(modloader::win::memory::resolve_rva(0x04733B98));
            }
            return cache;
        }
        inline app::InteractionBinding__Class* get_class() {
            return il2cpp::get_class<app::InteractionBinding__Class>(type_info(), "Moon.InteractionGraph", "InteractionBinding");
        }
        inline app::InteractionBinding* create() {
            return il2cpp::create_object<app::InteractionBinding>(get_class());
        }
    } // namespace InteractionBinding
} // namespace app::classes::types
