#pragma once
#include <Modloader/app/structs/TessellationModifier.h>
#include <Modloader/app/structs/TessellationModifier__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TessellationModifier {
        inline app::TessellationModifier__Class** type_info() {
            static app::TessellationModifier__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::TessellationModifier__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::TessellationModifier__Class* get_class() {
            return il2cpp::get_class<app::TessellationModifier__Class>(type_info(), "", "TessellationModifier");
        }
        inline app::TessellationModifier* create() {
            return il2cpp::create_object<app::TessellationModifier>(get_class());
        }
    } // namespace TessellationModifier
} // namespace app::classes::types
