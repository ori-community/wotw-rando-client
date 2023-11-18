#pragma once
#include <Modloader/app/structs/MoonTimelineUiFader.h>
#include <Modloader/app/structs/MoonTimelineUiFader__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonTimelineUiFader {
        inline app::MoonTimelineUiFader__Class** type_info() {
            static app::MoonTimelineUiFader__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MoonTimelineUiFader__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MoonTimelineUiFader__Class* get_class() {
            return il2cpp::get_class<app::MoonTimelineUiFader__Class>(type_info(), "", "MoonTimelineUiFader");
        }
        inline app::MoonTimelineUiFader* create() {
            return il2cpp::create_object<app::MoonTimelineUiFader>(get_class());
        }
    } // namespace MoonTimelineUiFader
} // namespace app::classes::types
