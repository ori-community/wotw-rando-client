#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IStateTransitionHolder {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IStateTransitionHolder__Class** type_info;
        inline app::IStateTransitionHolder__Class* get_class() {
            return il2cpp::get_class<app::IStateTransitionHolder__Class>(type_info, "", "IStateTransitionHolder");
        }
    } // namespace IStateTransitionHolder
} // namespace app::classes::types
