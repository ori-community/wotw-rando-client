#pragma once
#include <Modloader/app/structs/KeyNotFoundException.h>
#include <Modloader/app/structs/KeyNotFoundException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace KeyNotFoundException {
        inline app::KeyNotFoundException__Class** type_info() {
            static app::KeyNotFoundException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::KeyNotFoundException__Class**)(modloader::win::memory::resolve_rva(0x047530F8));
            }
            return cache;
        }
        inline app::KeyNotFoundException__Class* get_class() {
            return il2cpp::get_class<app::KeyNotFoundException__Class>(type_info(), "System.Collections.Generic", "KeyNotFoundException");
        }
        inline app::KeyNotFoundException* create() {
            return il2cpp::create_object<app::KeyNotFoundException>(get_class());
        }
    } // namespace KeyNotFoundException
} // namespace app::classes::types
