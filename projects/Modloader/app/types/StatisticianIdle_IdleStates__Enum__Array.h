#pragma once
#include <Modloader/app/structs/StatisticianIdle_IdleStates__Enum__Array.h>
#include <Modloader/app/structs/StatisticianIdle_IdleStates__Enum__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace StatisticianIdle_IdleStates__Enum__Array {
        inline app::StatisticianIdle_IdleStates__Enum__Array__Class** type_info() {
            static app::StatisticianIdle_IdleStates__Enum__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::StatisticianIdle_IdleStates__Enum__Array__Class**)(modloader::win::memory::resolve_rva(0x04770668));
            }
            return cache;
        }
        inline app::StatisticianIdle_IdleStates__Enum__Array__Class* get_class() {
            return il2cpp::get_class<app::StatisticianIdle_IdleStates__Enum__Array__Class>(type_info(), "", "StatisticianIdle+IdleStates[]");
        }
        inline app::StatisticianIdle_IdleStates__Enum__Array* create() {
            return il2cpp::create_object<app::StatisticianIdle_IdleStates__Enum__Array>(get_class());
        }
    } // namespace StatisticianIdle_IdleStates__Enum__Array
} // namespace app::classes::types
