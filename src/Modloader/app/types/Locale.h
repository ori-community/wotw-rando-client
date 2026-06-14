#pragma once
#include <Modloader/app/structs/Locale.h>
#include <Modloader/app/structs/Locale__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Locale {
        inline app::Locale__Class** type_info() {
            static app::Locale__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Locale__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Locale__Class* get_class() {
            return il2cpp::get_class<app::Locale__Class>(type_info(), "", "Locale");
        }
        inline app::Locale* create() {
            return il2cpp::create_object<app::Locale>(get_class());
        }
    } // namespace Locale
} // namespace app::classes::types
