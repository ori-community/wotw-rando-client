#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GSStatsReceived_t {
        namespace {
            app::GSStatsReceived_t__Class* type_info_ref = nullptr;
        }
        app::GSStatsReceived_t__Class** type_info = &type_info_ref;
        inline app::GSStatsReceived_t__Class* get_class() {
            return il2cpp::get_class<app::GSStatsReceived_t__Class>(type_info, "Steamworks", "GSStatsReceived_t");
        }
        inline app::GSStatsReceived_t* create() {
            return il2cpp::create_object<app::GSStatsReceived_t>(get_class());
        }
        inline app::GSStatsReceived_t__Boxed* box(app::GSStatsReceived_t value) {
            return il2cpp::box_value<app::GSStatsReceived_t__Boxed>(get_class(), value);
        }
    } // namespace GSStatsReceived_t
} // namespace app::classes::types
