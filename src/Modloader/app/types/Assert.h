#pragma once
#include <Modloader/app/structs/Assert.h>
#include <Modloader/app/structs/Assert__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Assert {
        inline app::Assert__Class** type_info() {
            static app::Assert__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Assert__Class**)(modloader::win::memory::resolve_rva(0x0478C688));
            }
            return cache;
        }
        inline app::Assert__Class* get_class() {
            return il2cpp::get_class<app::Assert__Class>(type_info(), "UnityEngine.Assertions", "Assert");
        }
        inline app::Assert* create() {
            return il2cpp::create_object<app::Assert>(get_class());
        }
    } // namespace Assert
} // namespace app::classes::types
