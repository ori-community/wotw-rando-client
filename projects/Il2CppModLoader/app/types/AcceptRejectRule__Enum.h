#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AcceptRejectRule__Enum {
        extern IL2CPP_MODLOADER_DLLEXPORT app::AcceptRejectRule__Enum__Class** type_info;
        inline app::AcceptRejectRule__Enum__Class* get_class() {
            return il2cpp::get_class<app::AcceptRejectRule__Enum__Class>(type_info, "System.Data", "AcceptRejectRule");
        }
        inline app::AcceptRejectRule__Enum* create() {
            return il2cpp::create_object<app::AcceptRejectRule__Enum>(get_class());
        }
    } // namespace AcceptRejectRule__Enum
} // namespace app::classes::types
