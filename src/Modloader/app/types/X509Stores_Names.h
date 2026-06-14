#pragma once
#include <Modloader/app/structs/X509Stores_Names.h>
#include <Modloader/app/structs/X509Stores_Names__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace X509Stores_Names {
        inline app::X509Stores_Names__Class** type_info() {
            static app::X509Stores_Names__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::X509Stores_Names__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::X509Stores_Names__Class* get_class() {
            return il2cpp::get_nested_class<app::X509Stores_Names__Class>(type_info(), "Mono.Security.X509", "X509Stores", "Names");
        }
        inline app::X509Stores_Names* create() {
            return il2cpp::create_object<app::X509Stores_Names>(get_class());
        }
    } // namespace X509Stores_Names
} // namespace app::classes::types
