#pragma once
#include <Modloader/app/structs/GSStatsUnloaded_t.h>
#include <Modloader/app/structs/GSStatsUnloaded_t__Boxed.h>
#include <Modloader/app/structs/GSStatsUnloaded_t__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GSStatsUnloaded_t {
        inline app::GSStatsUnloaded_t__Class** type_info() {
            static app::GSStatsUnloaded_t__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GSStatsUnloaded_t__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GSStatsUnloaded_t__Class* get_class() {
            return il2cpp::get_class<app::GSStatsUnloaded_t__Class>(type_info(), "Steamworks", "GSStatsUnloaded_t");
        }
        inline app::GSStatsUnloaded_t* create() {
            return il2cpp::create_object<app::GSStatsUnloaded_t>(get_class());
        }
        inline app::GSStatsUnloaded_t__Boxed* box(app::GSStatsUnloaded_t value) {
            return il2cpp::box_value<app::GSStatsUnloaded_t__Boxed>(get_class(), value);
        }
    } // namespace GSStatsUnloaded_t
} // namespace app::classes::types
