#pragma once
#include <Modloader/app/structs/Negative.h>
#include <Modloader/app/structs/Negative__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Negative {
        inline app::Negative__Class** type_info() {
            static app::Negative__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Negative__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Negative__Class* get_class() {
            return il2cpp::get_class<app::Negative__Class>(type_info(), "Colorful", "Negative");
        }
        inline app::Negative* create() {
            return il2cpp::create_object<app::Negative>(get_class());
        }
    } // namespace Negative
} // namespace app::classes::types
