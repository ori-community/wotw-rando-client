#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Animation_Enumerator {
        inline app::Animation_Enumerator__Class** type_info = (app::Animation_Enumerator__Class**)(modloader::win::memory::resolve_rva(0x0475C580));
        inline app::Animation_Enumerator__Class* get_class() {
            return il2cpp::get_nested_class<app::Animation_Enumerator__Class>(type_info, "UnityEngine", "Animation", "Enumerator");
        }
        inline app::Animation_Enumerator* create() {
            return il2cpp::create_object<app::Animation_Enumerator>(get_class());
        }
    } // namespace Animation_Enumerator
} // namespace app::classes::types
