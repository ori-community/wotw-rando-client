#pragma once
#include <Modloader/app/structs/ScrollFader.h>
#include <Modloader/app/structs/ScrollFader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ScrollFader {
        inline app::ScrollFader__Class** type_info() {
            static app::ScrollFader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ScrollFader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ScrollFader__Class* get_class() {
            return il2cpp::get_class<app::ScrollFader__Class>(type_info(), "", "ScrollFader");
        }
        inline app::ScrollFader* create() {
            return il2cpp::create_object<app::ScrollFader>(get_class());
        }
    } // namespace ScrollFader
} // namespace app::classes::types
