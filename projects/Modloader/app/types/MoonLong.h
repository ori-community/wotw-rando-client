#pragma once
#include <Modloader/app/structs/MoonLong.h>
#include <Modloader/app/structs/MoonLong__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonLong {
        inline app::MoonLong__Class** type_info() {
            static app::MoonLong__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonLong__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonLong__Class* get_class() {
            return il2cpp::get_class<app::MoonLong__Class>(type_info(), "Moon", "MoonLong");
        }
        inline app::MoonLong* create() {
            return il2cpp::create_object<app::MoonLong>(get_class());
        }
    } // namespace MoonLong
} // namespace app::classes::types
