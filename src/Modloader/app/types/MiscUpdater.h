#pragma once
#include <Modloader/app/structs/MiscUpdater.h>
#include <Modloader/app/structs/MiscUpdater__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MiscUpdater {
        inline app::MiscUpdater__Class** type_info() {
            static app::MiscUpdater__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MiscUpdater__Class**)(modloader::win::memory::resolve_rva(0x047136F8));
            }
            return cache;
        }
        inline app::MiscUpdater__Class* get_class() {
            return il2cpp::get_class<app::MiscUpdater__Class>(type_info(), "", "MiscUpdater");
        }
        inline app::MiscUpdater* create() {
            return il2cpp::create_object<app::MiscUpdater>(get_class());
        }
    } // namespace MiscUpdater
} // namespace app::classes::types
