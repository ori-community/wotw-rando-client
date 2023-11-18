#pragma once
#include <Modloader/app/structs/LowLevelComparer.h>
#include <Modloader/app/structs/LowLevelComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LowLevelComparer {
        inline app::LowLevelComparer__Class** type_info() {
            static app::LowLevelComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LowLevelComparer__Class**)(modloader::win::memory::resolve_rva(0x047087B0));
            }
            return cache;
        }
        inline app::LowLevelComparer__Class* get_class() {
            return il2cpp::get_class<app::LowLevelComparer__Class>(type_info(), "System.Collections", "LowLevelComparer");
        }
        inline app::LowLevelComparer* create() {
            return il2cpp::create_object<app::LowLevelComparer>(get_class());
        }
    } // namespace LowLevelComparer
} // namespace app::classes::types
