#pragma once
#include <Modloader/app/structs/HighlightNearSein.h>
#include <Modloader/app/structs/HighlightNearSein__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace HighlightNearSein {
        inline app::HighlightNearSein__Class** type_info() {
            static app::HighlightNearSein__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::HighlightNearSein__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::HighlightNearSein__Class* get_class() {
            return il2cpp::get_class<app::HighlightNearSein__Class>(type_info(), "", "HighlightNearSein");
        }
        inline app::HighlightNearSein* create() {
            return il2cpp::create_object<app::HighlightNearSein>(get_class());
        }
    } // namespace HighlightNearSein
} // namespace app::classes::types
