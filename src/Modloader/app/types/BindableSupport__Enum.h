#pragma once
#include <Modloader/app/structs/BindableSupport__Enum.h>
#include <Modloader/app/structs/BindableSupport__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BindableSupport__Enum {
        inline app::BindableSupport__Enum__Class** type_info() {
            static app::BindableSupport__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BindableSupport__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BindableSupport__Enum__Class* get_class() {
            return il2cpp::get_class<app::BindableSupport__Enum__Class>(type_info(), "System.ComponentModel", "BindableSupport");
        }
        inline app::BindableSupport__Enum* create() {
            return il2cpp::create_object<app::BindableSupport__Enum>(get_class());
        }
    } // namespace BindableSupport__Enum
} // namespace app::classes::types
