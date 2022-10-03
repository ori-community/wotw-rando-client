#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace Coroutine {
        namespace {
            app::Coroutine__Class* type_info_ref = nullptr;
        }
        app::Coroutine__Class** type_info = &type_info_ref;
        inline app::Coroutine__Class* get_class() {
            return il2cpp::get_class<app::Coroutine__Class>(type_info, "UnityEngine", "Coroutine");
        }
        inline app::Coroutine* create() {
            return il2cpp::create_object<app::Coroutine>(get_class());
        }
    } // namespace Coroutine
} // namespace app::classes::types
