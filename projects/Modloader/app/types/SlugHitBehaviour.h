#pragma once
#include <Modloader/app/structs/SlugHitBehaviour.h>
#include <Modloader/app/structs/SlugHitBehaviour__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugHitBehaviour {
        inline app::SlugHitBehaviour__Class** type_info() {
            static app::SlugHitBehaviour__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugHitBehaviour__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugHitBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SlugHitBehaviour__Class>(type_info(), "", "SlugHitBehaviour");
        }
        inline app::SlugHitBehaviour* create() {
            return il2cpp::create_object<app::SlugHitBehaviour>(get_class());
        }
    } // namespace SlugHitBehaviour
} // namespace app::classes::types
