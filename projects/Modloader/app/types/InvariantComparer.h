#pragma once
#include <Modloader/app/structs/InvariantComparer.h>
#include <Modloader/app/structs/InvariantComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InvariantComparer {
        inline app::InvariantComparer__Class** type_info() {
            static app::InvariantComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InvariantComparer__Class**)(modloader::win::memory::resolve_rva(0x0477CE98));
            }
            return cache;
        }
        inline app::InvariantComparer__Class* get_class() {
            return il2cpp::get_class<app::InvariantComparer__Class>(type_info(), "System", "InvariantComparer");
        }
        inline app::InvariantComparer* create() {
            return il2cpp::create_object<app::InvariantComparer>(get_class());
        }
    } // namespace InvariantComparer
} // namespace app::classes::types
