#pragma once
#include <Modloader/app/structs/Diff.h>
#include <Modloader/app/structs/Diff__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Diff {
        inline app::Diff__Class** type_info() {
            static app::Diff__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Diff__Class**)(modloader::win::memory::resolve_rva(0x04702158));
            }
            return cache;
        }
        inline app::Diff__Class* get_class() {
            return il2cpp::get_class<app::Diff__Class>(type_info(), "SystemIntegration.Synchronizer", "Diff");
        }
        inline app::Diff* create() {
            return il2cpp::create_object<app::Diff>(get_class());
        }
    } // namespace Diff
} // namespace app::classes::types
