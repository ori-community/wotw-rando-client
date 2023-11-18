#pragma once
#include <Modloader/app/structs/SlugFastBehaviour.h>
#include <Modloader/app/structs/SlugFastBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugFastBehaviour {
        inline app::SlugFastBehaviour__Class** type_info() {
            static app::SlugFastBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugFastBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugFastBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugFastBehaviour__Class>(type_info(), "Moon", "SlugFastBehaviour");
        }
        inline app::SlugFastBehaviour* create() {
            return il2cpp::create_object<app::SlugFastBehaviour>(get_class());
        }
    } // namespace SlugFastBehaviour
} // namespace app::classes::types
