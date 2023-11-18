#pragma once
#include <Modloader/app/structs/Ori.h>
#include <Modloader/app/structs/Ori__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Ori {
        inline app::Ori__Class** type_info() {
            static app::Ori__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Ori__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Ori__Class* get_class() {
            return il2cpp::get_class<app::Ori__Class>(type_info(), "", "Ori");
        }
        inline app::Ori* create() {
            return il2cpp::create_object<app::Ori>(get_class());
        }
    } // namespace Ori
} // namespace app::classes::types
