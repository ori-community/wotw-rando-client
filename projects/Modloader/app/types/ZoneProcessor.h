#pragma once
#include <Modloader/app/structs/ZoneProcessor.h>
#include <Modloader/app/structs/ZoneProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ZoneProcessor {
        inline app::ZoneProcessor__Class** type_info() {
            static app::ZoneProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ZoneProcessor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ZoneProcessor__Class* get_class() {
            return il2cpp::get_class<app::ZoneProcessor__Class>(type_info(), "Moon.Wwise", "ZoneProcessor");
        }
        inline app::ZoneProcessor* create() {
            return il2cpp::create_object<app::ZoneProcessor>(get_class());
        }
    } // namespace ZoneProcessor
} // namespace app::classes::types
