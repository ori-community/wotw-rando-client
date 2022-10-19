#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace StatisticianIdle_IdleStates__Enum {
        inline app::StatisticianIdle_IdleStates__Enum__Class** type_info = (app::StatisticianIdle_IdleStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x047563A8));
        inline app::StatisticianIdle_IdleStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::StatisticianIdle_IdleStates__Enum__Class>(type_info, "", "StatisticianIdle", "IdleStates");
        }
        inline app::StatisticianIdle_IdleStates__Enum* create() {
            return il2cpp::create_object<app::StatisticianIdle_IdleStates__Enum>(get_class());
        }
        inline app::StatisticianIdle_IdleStates__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::StatisticianIdle_IdleStates__Enum__Array>(get_class(), size);
        }
        inline app::StatisticianIdle_IdleStates__Enum__Array* create_array(const std::vector<app::StatisticianIdle_IdleStates__Enum*>& items) {
            return il2cpp::array_new<app::StatisticianIdle_IdleStates__Enum__Array>(get_class(), items);
        }
    } // namespace StatisticianIdle_IdleStates__Enum
} // namespace app::classes::types
