#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HintPositioning__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HintPositioning__Enum__Class** type_info;
        inline app::HintPositioning__Enum__Class* get_class() {
            return il2cpp::get_class<app::HintPositioning__Enum__Class>(type_info, "", "HintPositioning");
        }
        inline app::HintPositioning__Enum* create() {
            return il2cpp::create_object<app::HintPositioning__Enum>(get_class());
        }
    } // namespace HintPositioning__Enum
} // namespace app::classes::types
