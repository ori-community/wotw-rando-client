#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Vintage_InstragramFilter__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::Vintage_InstragramFilter__Enum__Class** type_info;
        inline app::Vintage_InstragramFilter__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Vintage_InstragramFilter__Enum__Class>(type_info, "Colorful", "Vintage", "InstragramFilter");
        }
        inline app::Vintage_InstragramFilter__Enum* create() {
            return il2cpp::create_object<app::Vintage_InstragramFilter__Enum>(get_class());
        }
    } // namespace Vintage_InstragramFilter__Enum
} // namespace app::classes::types
