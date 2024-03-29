#pragma once
#include <Modloader/app/structs/FastResourceComparer.h>
#include <Modloader/app/structs/FastResourceComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FastResourceComparer {
        inline app::FastResourceComparer__Class** type_info() {
            static app::FastResourceComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::FastResourceComparer__Class**)(modloader::win::memory::resolve_rva(0x04724C50));
            }
            return cache;
        }
        inline app::FastResourceComparer__Class* get_class() {
            return il2cpp::get_class<app::FastResourceComparer__Class>(type_info(), "System.Resources", "FastResourceComparer");
        }
        inline app::FastResourceComparer* create() {
            return il2cpp::create_object<app::FastResourceComparer>(get_class());
        }
    } // namespace FastResourceComparer
} // namespace app::classes::types
