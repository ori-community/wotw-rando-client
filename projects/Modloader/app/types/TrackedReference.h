#pragma once
#include <Modloader/app/structs/TrackedReference.h>
#include <Modloader/app/structs/TrackedReference__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TrackedReference {
        inline app::TrackedReference__Class** type_info() {
            static app::TrackedReference__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TrackedReference__Class**)(modloader::win::memory::resolve_rva(0x0471B878));
            }
            return cache;
        }
        inline app::TrackedReference__Class* get_class() {
            return il2cpp::get_class<app::TrackedReference__Class>(type_info(), "UnityEngine", "TrackedReference");
        }
        inline app::TrackedReference* create() {
            return il2cpp::create_object<app::TrackedReference>(get_class());
        }
    } // namespace TrackedReference
} // namespace app::classes::types
