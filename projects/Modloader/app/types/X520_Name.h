#pragma once
#include <Modloader/app/structs/X520_Name.h>
#include <Modloader/app/structs/X520_Name__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X520_Name {
        inline app::X520_Name__Class** type_info() {
            static app::X520_Name__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X520_Name__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X520_Name__Class* get_class() {
            return il2cpp::get_nested_class<app::X520_Name__Class>(type_info(), "Mono.Security.X509", "X520", "Name");
        }
        inline app::X520_Name* create() {
            return il2cpp::create_object<app::X520_Name>(get_class());
        }
    } // namespace X520_Name
} // namespace app::classes::types
