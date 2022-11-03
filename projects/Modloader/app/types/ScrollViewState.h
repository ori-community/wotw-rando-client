#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ScrollViewState {
        inline app::ScrollViewState__Class** type_info = (app::ScrollViewState__Class**)(modloader::win::memory::resolve_rva(0x04734868));
        inline app::ScrollViewState__Class* get_class() {
            return il2cpp::get_class<app::ScrollViewState__Class>(type_info, "UnityEngine", "ScrollViewState");
        }
        inline app::ScrollViewState* create() {
            return il2cpp::create_object<app::ScrollViewState>(get_class());
        }
    } // namespace ScrollViewState
} // namespace app::classes::types
