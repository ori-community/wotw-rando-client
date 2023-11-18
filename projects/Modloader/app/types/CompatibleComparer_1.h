#pragma once
#include <Modloader/app/structs/CompatibleComparer_1.h>
#include <Modloader/app/structs/CompatibleComparer_1__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CompatibleComparer_1 {
        inline app::CompatibleComparer_1__Class** type_info() {
            static app::CompatibleComparer_1__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CompatibleComparer_1__Class**)(modloader::win::memory::resolve_rva(0x04715C58));
            }
            return cache;
        }
        inline app::CompatibleComparer_1__Class* get_class() {
            return il2cpp::get_class<app::CompatibleComparer_1__Class>(type_info(), "System.Collections.Specialized", "CompatibleComparer");
        }
        inline app::CompatibleComparer_1* create() {
            return il2cpp::create_object<app::CompatibleComparer_1>(get_class());
        }
    } // namespace CompatibleComparer_1
} // namespace app::classes::types
