#pragma once
#include <Modloader/app/structs/ScaleStateModifier.h>
#include <Modloader/app/structs/ScaleStateModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScaleStateModifier {
        inline app::ScaleStateModifier__Class** type_info() {
            static app::ScaleStateModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScaleStateModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScaleStateModifier__Class* get_class() {
            return il2cpp::get_class<app::ScaleStateModifier__Class>(type_info(), "", "ScaleStateModifier");
        }
        inline app::ScaleStateModifier* create() {
            return il2cpp::create_object<app::ScaleStateModifier>(get_class());
        }
    } // namespace ScaleStateModifier
} // namespace app::classes::types
