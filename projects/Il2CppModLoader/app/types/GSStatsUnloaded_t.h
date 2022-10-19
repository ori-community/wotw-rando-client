#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace GSStatsUnloaded_t {
        namespace {
            inline app::GSStatsUnloaded_t__Class* type_info_ref = nullptr;
        }
        inline app::GSStatsUnloaded_t__Class** type_info = &type_info_ref;
        inline app::GSStatsUnloaded_t__Class* get_class() {
            return il2cpp::get_class<app::GSStatsUnloaded_t__Class>(type_info, "Steamworks", "GSStatsUnloaded_t");
        }
        inline app::GSStatsUnloaded_t* create() {
            return il2cpp::create_object<app::GSStatsUnloaded_t>(get_class());
        }
        inline app::GSStatsUnloaded_t__Boxed* box(app::GSStatsUnloaded_t value) {
            return il2cpp::box_value<app::GSStatsUnloaded_t__Boxed>(get_class(), value);
        }
    } // namespace GSStatsUnloaded_t
} // namespace app::classes::types
