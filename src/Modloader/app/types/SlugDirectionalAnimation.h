#pragma once
#include <Modloader/app/structs/SlugDirectionalAnimation.h>
#include <Modloader/app/structs/SlugDirectionalAnimation__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SlugDirectionalAnimation {
        inline app::SlugDirectionalAnimation__Class** type_info() {
            static app::SlugDirectionalAnimation__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SlugDirectionalAnimation__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SlugDirectionalAnimation__Class* get_class() {
            return il2cpp::get_class<app::SlugDirectionalAnimation__Class>(type_info(), "", "SlugDirectionalAnimation");
        }
        inline app::SlugDirectionalAnimation* create() {
            return il2cpp::create_object<app::SlugDirectionalAnimation>(get_class());
        }
    } // namespace SlugDirectionalAnimation
} // namespace app::classes::types
