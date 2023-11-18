#pragma once
#include <Modloader/app/structs/IBabyWormAutoTarget.h>
#include <Modloader/app/structs/IBabyWormAutoTarget__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IBabyWormAutoTarget {
        inline app::IBabyWormAutoTarget__Class** type_info() {
            static app::IBabyWormAutoTarget__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IBabyWormAutoTarget__Class**)(modloader::win::memory::resolve_rva(0x0475B648));
            }
            return cache;
        }
        inline app::IBabyWormAutoTarget__Class* get_class() {
            return il2cpp::get_class<app::IBabyWormAutoTarget__Class>(type_info(), "", "IBabyWormAutoTarget");
        }
    } // namespace IBabyWormAutoTarget
} // namespace app::classes::types
