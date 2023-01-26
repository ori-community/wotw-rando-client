#pragma once
#include <Modloader/app/structs/SeinBowMark.h>
#include <Modloader/app/structs/SeinBowMark__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinBowMark {
        inline app::SeinBowMark__Class** type_info() {
            static app::SeinBowMark__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::SeinBowMark__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::SeinBowMark__Class* get_class() {
            return il2cpp::get_class<app::SeinBowMark__Class>(type_info(), "", "SeinBowMark");
        }
        inline app::SeinBowMark* create() {
            return il2cpp::create_object<app::SeinBowMark>(get_class());
        }
    } // namespace SeinBowMark
} // namespace app::classes::types
