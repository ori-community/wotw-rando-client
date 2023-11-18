#pragma once
#include <Modloader/app/structs/ContrastProvider.h>
#include <Modloader/app/structs/ContrastProvider__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ContrastProvider {
        inline app::ContrastProvider__Class** type_info() {
            static app::ContrastProvider__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ContrastProvider__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ContrastProvider__Class* get_class() {
            return il2cpp::get_class<app::ContrastProvider__Class>(type_info(), "", "ContrastProvider");
        }
        inline app::ContrastProvider* create() {
            return il2cpp::create_object<app::ContrastProvider>(get_class());
        }
    } // namespace ContrastProvider
} // namespace app::classes::types
