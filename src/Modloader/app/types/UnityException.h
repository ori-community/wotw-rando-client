#pragma once
#include <Modloader/app/structs/UnityException.h>
#include <Modloader/app/structs/UnityException__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UnityException {
        inline app::UnityException__Class** type_info() {
            static app::UnityException__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UnityException__Class**)(modloader::win::memory::resolve_rva(0x047102D0));
            }
            return cache;
        }
        inline app::UnityException__Class* get_class() {
            return il2cpp::get_class<app::UnityException__Class>(type_info(), "UnityEngine", "UnityException");
        }
        inline app::UnityException* create() {
            return il2cpp::create_object<app::UnityException>(get_class());
        }
    } // namespace UnityException
} // namespace app::classes::types
