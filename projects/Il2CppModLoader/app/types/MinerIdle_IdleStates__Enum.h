#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerIdle_IdleStates__Enum {
        inline app::MinerIdle_IdleStates__Enum__Class** type_info = (app::MinerIdle_IdleStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714130));
        inline app::MinerIdle_IdleStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerIdle_IdleStates__Enum__Class>(type_info, "", "MinerIdle", "IdleStates");
        }
        inline app::MinerIdle_IdleStates__Enum* create() {
            return il2cpp::create_object<app::MinerIdle_IdleStates__Enum>(get_class());
        }
    } // namespace MinerIdle_IdleStates__Enum
} // namespace app::classes::types
