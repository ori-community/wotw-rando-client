#pragma once
#include <Modloader/app/structs/ChromaticAberration.h>
#include <Modloader/app/structs/ChromaticAberration__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChromaticAberration {
        inline app::ChromaticAberration__Class** type_info() {
            static app::ChromaticAberration__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChromaticAberration__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChromaticAberration__Class* get_class() {
            return il2cpp::get_class<app::ChromaticAberration__Class>(type_info(), "Colorful", "ChromaticAberration");
        }
        inline app::ChromaticAberration* create() {
            return il2cpp::create_object<app::ChromaticAberration>(get_class());
        }
    } // namespace ChromaticAberration
} // namespace app::classes::types
