#pragma once
#include <Modloader/app/structs/MinerIdle_IdleStates__Enum.h>
#include <Modloader/app/structs/MinerIdle_IdleStates__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MinerIdle_IdleStates__Enum {
        inline app::MinerIdle_IdleStates__Enum__Class** type_info() {
            static app::MinerIdle_IdleStates__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MinerIdle_IdleStates__Enum__Class**)(modloader::win::memory::resolve_rva(0x04714130));
            }
            return cache;
        }
        inline app::MinerIdle_IdleStates__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::MinerIdle_IdleStates__Enum__Class>(type_info(), "", "MinerIdle", "IdleStates");
        }
        inline app::MinerIdle_IdleStates__Enum* create() {
            return il2cpp::create_object<app::MinerIdle_IdleStates__Enum>(get_class());
        }
    } // namespace MinerIdle_IdleStates__Enum
} // namespace app::classes::types
