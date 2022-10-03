#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TickData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TickData__Class** type_info;
        inline app::TickData__Class* get_class() {
            return il2cpp::get_class<app::TickData__Class>(type_info, "UberBehaviourTree", "TickData");
        }
        inline app::TickData* create() {
            return il2cpp::create_object<app::TickData>(get_class());
        }
        inline app::TickData__Boxed* box(app::TickData value) {
            return il2cpp::box_value<app::TickData__Boxed>(get_class(), value);
        }
    } // namespace TickData
} // namespace app::classes::types
