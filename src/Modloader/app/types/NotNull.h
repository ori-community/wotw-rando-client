#pragma once
#include <Modloader/app/structs/NotNull.h>
#include <Modloader/app/structs/NotNull__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NotNull {
        inline app::NotNull__Class** type_info() {
            static app::NotNull__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NotNull__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NotNull__Class* get_class() {
            return il2cpp::get_class<app::NotNull__Class>(type_info(), "", "NotNull");
        }
        inline app::NotNull* create() {
            return il2cpp::create_object<app::NotNull>(get_class());
        }
    } // namespace NotNull
} // namespace app::classes::types
