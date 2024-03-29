#pragma once
#include <Modloader/app/structs/ShowFixedTimeTextEntity_c.h>
#include <Modloader/app/structs/ShowFixedTimeTextEntity_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ShowFixedTimeTextEntity_c {
        inline app::ShowFixedTimeTextEntity_c__Class** type_info() {
            static app::ShowFixedTimeTextEntity_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ShowFixedTimeTextEntity_c__Class**)(modloader::win::memory::resolve_rva(0x047835B8));
            }
            return cache;
        }
        inline app::ShowFixedTimeTextEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::ShowFixedTimeTextEntity_c__Class>(type_info(), "Moon.Timeline", "ShowFixedTimeTextEntity", "<>c");
        }
        inline app::ShowFixedTimeTextEntity_c* create() {
            return il2cpp::create_object<app::ShowFixedTimeTextEntity_c>(get_class());
        }
    } // namespace ShowFixedTimeTextEntity_c
} // namespace app::classes::types
