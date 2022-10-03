#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TimeData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TimeData__Class** type_info;
        inline app::TimeData__Class* get_class() {
            return il2cpp::get_class<app::TimeData__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "TimeData");
        }
        inline app::TimeData* create() {
            return il2cpp::create_object<app::TimeData>(get_class());
        }
        inline app::TimeData__Boxed* box(app::TimeData value) {
            return il2cpp::box_value<app::TimeData__Boxed>(get_class(), value);
        }
    } // namespace TimeData
} // namespace app::classes::types
