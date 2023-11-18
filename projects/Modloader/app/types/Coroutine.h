#pragma once
#include <Modloader/app/structs/Coroutine.h>
#include <Modloader/app/structs/Coroutine__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Coroutine {
        inline app::Coroutine__Class** type_info() {
            static app::Coroutine__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::Coroutine__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::Coroutine__Class* get_class() {
            return il2cpp::get_class<app::Coroutine__Class>(type_info(), "UnityEngine", "Coroutine");
        }
        inline app::Coroutine* create() {
            return il2cpp::create_object<app::Coroutine>(get_class());
        }
    } // namespace Coroutine
} // namespace app::classes::types
