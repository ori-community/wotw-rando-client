#pragma once
#include <Modloader/app/structs/FadingSound__Array.h>
#include <Modloader/app/structs/FadingSound__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FadingSound__Array {
        inline app::FadingSound__Array__Class** type_info() {
            static app::FadingSound__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FadingSound__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FadingSound__Array__Class* get_class() {
            return il2cpp::get_class<app::FadingSound__Array__Class>(type_info(), "", "FadingSound[]");
        }
        inline app::FadingSound__Array* create() {
            return il2cpp::create_object<app::FadingSound__Array>(get_class());
        }
    } // namespace FadingSound__Array
} // namespace app::classes::types
