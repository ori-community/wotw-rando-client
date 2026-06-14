#pragma once
#include <Modloader/app/structs/ShadowsMidtonesHighlights.h>
#include <Modloader/app/structs/ShadowsMidtonesHighlights__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShadowsMidtonesHighlights {
        inline app::ShadowsMidtonesHighlights__Class** type_info() {
            static app::ShadowsMidtonesHighlights__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ShadowsMidtonesHighlights__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ShadowsMidtonesHighlights__Class* get_class() {
            return il2cpp::get_class<app::ShadowsMidtonesHighlights__Class>(type_info(), "Colorful", "ShadowsMidtonesHighlights");
        }
        inline app::ShadowsMidtonesHighlights* create() {
            return il2cpp::create_object<app::ShadowsMidtonesHighlights>(get_class());
        }
    } // namespace ShadowsMidtonesHighlights
} // namespace app::classes::types
