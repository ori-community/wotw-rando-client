#pragma once
#include <Modloader/app/structs/InteractionLightModifier.h>
#include <Modloader/app/structs/InteractionLightModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionLightModifier {
        inline app::InteractionLightModifier__Class** type_info() {
            static app::InteractionLightModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionLightModifier__Class**)(modloader::win::memory::resolve_rva(0x04719EC0));
            }
            return cache;
        }
        inline app::InteractionLightModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionLightModifier__Class>(type_info(), "", "InteractionLightModifier");
        }
        inline app::InteractionLightModifier* create() {
            return il2cpp::create_object<app::InteractionLightModifier>(get_class());
        }
    } // namespace InteractionLightModifier
} // namespace app::classes::types
