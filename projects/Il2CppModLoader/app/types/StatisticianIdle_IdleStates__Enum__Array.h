#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticianIdle_IdleStates__Enum__Array {
        inline app::StatisticianIdle_IdleStates__Enum__Array__Class** type_info = (app::StatisticianIdle_IdleStates__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04770668));
        inline app::StatisticianIdle_IdleStates__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticianIdle_IdleStates__Enum__Array__Class>(type_info, "", "StatisticianIdle+IdleStates[]");
        }
        inline app::StatisticianIdle_IdleStates__Enum__Array* create() {
            return il2cpp::create_object<app::StatisticianIdle_IdleStates__Enum__Array>(get_class());
        }
    } // namespace StatisticianIdle_IdleStates__Enum__Array
} // namespace app::classes::types
