#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IBabyWormAutoTarget__Class.h>

namespace app::classes::types {
    namespace IBabyWormAutoTarget {
        inline app::IBabyWormAutoTarget__Class** type_info = (app::IBabyWormAutoTarget__Class**)(modloader::win::memory::resolve_rva(0x0475B648));
        inline app::IBabyWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabyWormAutoTarget__Class>(type_info, "", "IBabyWormAutoTarget");
        }
    } // namespace IBabyWormAutoTarget
} // namespace app::classes::types
