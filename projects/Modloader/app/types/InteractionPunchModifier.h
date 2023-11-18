#pragma once
#include <Modloader/app/structs/InteractionPunchModifier.h>
#include <Modloader/app/structs/InteractionPunchModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InteractionPunchModifier {
        inline app::InteractionPunchModifier__Class** type_info() {
            static app::InteractionPunchModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InteractionPunchModifier__Class**)(modloader::win::memory::resolve_rva(0x04772058));
            }
            return cache;
        }
        inline app::InteractionPunchModifier__Class* get_class() {
            return il2cpp::get_class<app::InteractionPunchModifier__Class>(type_info(), "", "InteractionPunchModifier");
        }
        inline app::InteractionPunchModifier* create() {
            return il2cpp::create_object<app::InteractionPunchModifier>(get_class());
        }
    } // namespace InteractionPunchModifier
} // namespace app::classes::types
