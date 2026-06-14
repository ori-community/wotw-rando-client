#pragma once
#include <Modloader/app/structs/UberInteractionModifier.h>
#include <Modloader/app/structs/UberInteractionModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberInteractionModifier {
        inline app::UberInteractionModifier__Class** type_info() {
            static app::UberInteractionModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberInteractionModifier__Class**)(modloader::win::memory::resolve_rva(0x047649B0));
            }
            return cache;
        }
        inline app::UberInteractionModifier__Class* get_class() {
            return il2cpp::get_class<app::UberInteractionModifier__Class>(type_info(), "", "UberInteractionModifier");
        }
        inline app::UberInteractionModifier* create() {
            return il2cpp::create_object<app::UberInteractionModifier>(get_class());
        }
    } // namespace UberInteractionModifier
} // namespace app::classes::types
