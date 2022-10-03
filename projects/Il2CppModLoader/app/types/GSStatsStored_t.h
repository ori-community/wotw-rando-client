#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace GSStatsStored_t {
        namespace {
            app::GSStatsStored_t__Class* type_info_ref = nullptr;
        }
        app::GSStatsStored_t__Class** type_info = &type_info_ref;
        inline app::GSStatsStored_t__Class* get_class() {
            return il2cpp::get_class<app::GSStatsStored_t__Class>(type_info, "Steamworks", "GSStatsStored_t");
        }
        inline app::GSStatsStored_t* create() {
            return il2cpp::create_object<app::GSStatsStored_t>(get_class());
        }
        inline app::GSStatsStored_t__Boxed* box(app::GSStatsStored_t value) {
            return il2cpp::box_value<app::GSStatsStored_t__Boxed>(get_class(), value);
        }
    } // namespace GSStatsStored_t
} // namespace app::classes::types
