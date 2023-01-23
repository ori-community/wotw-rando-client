#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IntUberState__Class.h>
#include <Modloader/app/structs/IntUberState.h>

namespace app::classes::types {
    namespace IntUberState {
        inline app::IntUberState__Class** type_info = (app::IntUberState__Class**)(modloader::win::memory::resolve_rva(0x04750038));
        inline app::IntUberState__Class* get_class() {
            return il2cpp::get_class<app::IntUberState__Class>(type_info, "Moon", "IntUberState");
        }
        inline app::IntUberState* create() {
            return il2cpp::create_object<app::IntUberState>(get_class());
        }
    } // namespace IntUberState
} // namespace app::classes::types
