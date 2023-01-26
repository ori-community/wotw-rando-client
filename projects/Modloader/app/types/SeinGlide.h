#pragma once
#include <Modloader/app/structs/SeinGlide.h>
#include <Modloader/app/structs/SeinGlide__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinGlide {
        inline app::SeinGlide__Class** type_info() {
            static app::SeinGlide__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinGlide__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinGlide__Class* get_class() {
            return il2cpp::get_class<app::SeinGlide__Class>(type_info(), "", "SeinGlide");
        }
        inline app::SeinGlide* create() {
            return il2cpp::create_object<app::SeinGlide>(get_class());
        }
    } // namespace SeinGlide
} // namespace app::classes::types
