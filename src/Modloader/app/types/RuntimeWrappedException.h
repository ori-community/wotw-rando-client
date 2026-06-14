#pragma once
#include <Modloader/app/structs/RuntimeWrappedException.h>
#include <Modloader/app/structs/RuntimeWrappedException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RuntimeWrappedException {
        inline app::RuntimeWrappedException__Class** type_info() {
            static app::RuntimeWrappedException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::RuntimeWrappedException__Class**)(modloader::win::memory::resolve_rva(0x04778E50));
            }
            return cache;
        }
        inline app::RuntimeWrappedException__Class* get_class() {
            return il2cpp::get_class<app::RuntimeWrappedException__Class>(type_info(), "System.Runtime.CompilerServices", "RuntimeWrappedException");
        }
        inline app::RuntimeWrappedException* create() {
            return il2cpp::create_object<app::RuntimeWrappedException>(get_class());
        }
    } // namespace RuntimeWrappedException
} // namespace app::classes::types
