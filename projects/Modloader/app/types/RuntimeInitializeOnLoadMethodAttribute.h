#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RuntimeInitializeOnLoadMethodAttribute {
        namespace {
            inline app::RuntimeInitializeOnLoadMethodAttribute__Class* type_info_ref = nullptr;
        }
        inline app::RuntimeInitializeOnLoadMethodAttribute__Class** type_info = &type_info_ref;
        inline app::RuntimeInitializeOnLoadMethodAttribute__Class* get_class() {
            return il2cpp::get_class<app::RuntimeInitializeOnLoadMethodAttribute__Class>(type_info, "UnityEngine", "RuntimeInitializeOnLoadMethodAttribute");
        }
        inline app::RuntimeInitializeOnLoadMethodAttribute* create() {
            return il2cpp::create_object<app::RuntimeInitializeOnLoadMethodAttribute>(get_class());
        }
    } // namespace RuntimeInitializeOnLoadMethodAttribute
} // namespace app::classes::types
