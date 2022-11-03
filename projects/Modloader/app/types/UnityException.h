#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace UnityException {
        inline app::UnityException__Class** type_info = (app::UnityException__Class**)(modloader::win::memory::resolve_rva(0x047102D0));
        inline app::UnityException__Class* get_class() {
            return il2cpp::get_class<app::UnityException__Class>(type_info, "UnityEngine", "UnityException");
        }
        inline app::UnityException* create() {
            return il2cpp::create_object<app::UnityException>(get_class());
        }
    } // namespace UnityException
} // namespace app::classes::types
