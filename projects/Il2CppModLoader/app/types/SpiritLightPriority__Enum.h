#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritLightPriority__Enum {
        namespace {
            app::SpiritLightPriority__Enum__Class* type_info_ref = nullptr;
        }
        app::SpiritLightPriority__Enum__Class** type_info = &type_info_ref;
        inline app::SpiritLightPriority__Enum__Class* get_class() {
            return il2cpp::get_class<app::SpiritLightPriority__Enum__Class>(type_info, "", "SpiritLightPriority");
        }
        inline app::SpiritLightPriority__Enum* create() {
            return il2cpp::create_object<app::SpiritLightPriority__Enum>(get_class());
        }
    } // namespace SpiritLightPriority__Enum
} // namespace app::classes::types
