#pragma once
#include <Modloader/app/structs/Comparer.h>
#include <Modloader/app/structs/Comparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Comparer {
        inline app::Comparer__Class** type_info() {
            static app::Comparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Comparer__Class**)(modloader::win::memory::resolve_rva(0x04744C38));
            }
            return cache;
        }
        inline app::Comparer__Class* get_class() {
            return il2cpp::get_class<app::Comparer__Class>(type_info(), "System.Collections", "Comparer");
        }
        inline app::Comparer* create() {
            return il2cpp::create_object<app::Comparer>(get_class());
        }
    } // namespace Comparer
} // namespace app::classes::types
