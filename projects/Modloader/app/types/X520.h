#pragma once
#include <Modloader/app/structs/X520.h>
#include <Modloader/app/structs/X520__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520 {
        inline app::X520__Class** type_info() {
            static app::X520__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X520__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X520__Class* get_class() {
            return il2cpp::get_class<app::X520__Class>(type_info(), "Mono.Security.X509", "X520");
        }
        inline app::X520* create() {
            return il2cpp::create_object<app::X520>(get_class());
        }
    } // namespace X520
} // namespace app::classes::types
