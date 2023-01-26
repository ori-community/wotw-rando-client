#pragma once
#include <Modloader/app/structs/SeinWallSlide.h>
#include <Modloader/app/structs/SeinWallSlide__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinWallSlide {
        inline app::SeinWallSlide__Class** type_info() {
            static app::SeinWallSlide__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinWallSlide__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinWallSlide__Class* get_class() {
            return il2cpp::get_class<app::SeinWallSlide__Class>(type_info(), "", "SeinWallSlide");
        }
        inline app::SeinWallSlide* create() {
            return il2cpp::create_object<app::SeinWallSlide>(get_class());
        }
    } // namespace SeinWallSlide
} // namespace app::classes::types
