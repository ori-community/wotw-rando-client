#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WormHiddenState__Class.h>
#include <Modloader/app/structs/WormHiddenState.h>

namespace app::classes::types {
    namespace WormHiddenState {
        inline app::WormHiddenState__Class** type_info = (app::WormHiddenState__Class**)(modloader::win::memory::resolve_rva(0x04759558));
        inline app::WormHiddenState__Class* get_class() {
            return il2cpp::get_class<app::WormHiddenState__Class>(type_info, "", "WormHiddenState");
        }
        inline app::WormHiddenState* create() {
            return il2cpp::create_object<app::WormHiddenState>(get_class());
        }
    } // namespace WormHiddenState
} // namespace app::classes::types
