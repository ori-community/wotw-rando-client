#pragma once
#include <Modloader/app/structs/Strokes.h>
#include <Modloader/app/structs/Strokes__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Strokes {
        inline app::Strokes__Class** type_info() {
            static app::Strokes__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Strokes__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Strokes__Class* get_class() {
            return il2cpp::get_class<app::Strokes__Class>(type_info(), "Colorful", "Strokes");
        }
        inline app::Strokes* create() {
            return il2cpp::create_object<app::Strokes>(get_class());
        }
    } // namespace Strokes
} // namespace app::classes::types
