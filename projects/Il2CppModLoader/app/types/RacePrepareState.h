#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace RacePrepareState {
        extern IL2CPP_MODLOADER_DLLEXPORT app::RacePrepareState__Class** type_info;
        inline app::RacePrepareState__Class* get_class() {
            return il2cpp::get_class<app::RacePrepareState__Class>(type_info, "", "RacePrepareState");
        }
        inline app::RacePrepareState* create() {
            return il2cpp::create_object<app::RacePrepareState>(get_class());
        }
    } // namespace RacePrepareState
} // namespace app::classes::types
