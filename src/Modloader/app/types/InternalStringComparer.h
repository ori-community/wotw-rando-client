#pragma once
#include <Modloader/app/structs/InternalStringComparer.h>
#include <Modloader/app/structs/InternalStringComparer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace InternalStringComparer {
        inline app::InternalStringComparer__Class** type_info() {
            static app::InternalStringComparer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::InternalStringComparer__Class**)(modloader::win::memory::resolve_rva(0x04753200));
            }
            return cache;
        }
        inline app::InternalStringComparer__Class* get_class() {
            return il2cpp::get_class<app::InternalStringComparer__Class>(type_info(), "System.Collections.Generic", "InternalStringComparer");
        }
        inline app::InternalStringComparer* create() {
            return il2cpp::create_object<app::InternalStringComparer>(get_class());
        }
    } // namespace InternalStringComparer
} // namespace app::classes::types
