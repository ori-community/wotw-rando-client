#pragma once
#include <Modloader/app/structs/CaseInsensitiveComparer.h>
#include <Modloader/app/structs/CaseInsensitiveComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CaseInsensitiveComparer {
        inline app::CaseInsensitiveComparer__Class** type_info() {
            static app::CaseInsensitiveComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::CaseInsensitiveComparer__Class**)(modloader::win::memory::resolve_rva(0x04767D98));
            }
            return cache;
        }
        inline app::CaseInsensitiveComparer__Class* get_class() {
            return il2cpp::get_class<app::CaseInsensitiveComparer__Class>(type_info(), "System.Collections", "CaseInsensitiveComparer");
        }
        inline app::CaseInsensitiveComparer* create() {
            return il2cpp::create_object<app::CaseInsensitiveComparer>(get_class());
        }
    } // namespace CaseInsensitiveComparer
} // namespace app::classes::types
