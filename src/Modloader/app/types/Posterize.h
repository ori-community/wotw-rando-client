#pragma once
#include <Modloader/app/structs/Posterize.h>
#include <Modloader/app/structs/Posterize__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Posterize {
        inline app::Posterize__Class** type_info() {
            static app::Posterize__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Posterize__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Posterize__Class* get_class() {
            return il2cpp::get_class<app::Posterize__Class>(type_info(), "Colorful", "Posterize");
        }
        inline app::Posterize* create() {
            return il2cpp::create_object<app::Posterize>(get_class());
        }
    } // namespace Posterize
} // namespace app::classes::types
