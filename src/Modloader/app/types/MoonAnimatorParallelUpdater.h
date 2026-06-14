#pragma once
#include <Modloader/app/structs/MoonAnimatorParallelUpdater.h>
#include <Modloader/app/structs/MoonAnimatorParallelUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonAnimatorParallelUpdater {
        inline app::MoonAnimatorParallelUpdater__Class** type_info() {
            static app::MoonAnimatorParallelUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonAnimatorParallelUpdater__Class**)(modloader::win::memory::resolve_rva(0x04771120));
            }
            return cache;
        }
        inline app::MoonAnimatorParallelUpdater__Class* get_class() {
            return il2cpp::get_class<app::MoonAnimatorParallelUpdater__Class>(type_info(), "Moon", "MoonAnimatorParallelUpdater");
        }
        inline app::MoonAnimatorParallelUpdater* create() {
            return il2cpp::create_object<app::MoonAnimatorParallelUpdater>(get_class());
        }
    } // namespace MoonAnimatorParallelUpdater
} // namespace app::classes::types
