#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinLogicCycle {
        inline app::SeinLogicCycle__Class** type_info = (app::SeinLogicCycle__Class**)(modloader::win::memory::resolve_rva(0x04786E08));
        inline app::SeinLogicCycle__Class* get_class() {
            return il2cpp::get_class<app::SeinLogicCycle__Class>(type_info, "", "SeinLogicCycle");
        }
        inline app::SeinLogicCycle* create() {
            return il2cpp::create_object<app::SeinLogicCycle>(get_class());
        }
    } // namespace SeinLogicCycle
} // namespace app::classes::types
