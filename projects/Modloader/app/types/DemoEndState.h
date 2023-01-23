#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DemoEndState__Class.h>
#include <Modloader/app/structs/DemoEndState.h>

namespace app::classes::types {
    namespace DemoEndState {
        inline app::DemoEndState__Class** type_info = (app::DemoEndState__Class**)(modloader::win::memory::resolve_rva(0x047391B8));
        inline app::DemoEndState__Class* get_class() {
            return il2cpp::get_class<app::DemoEndState__Class>(type_info, "", "DemoEndState");
        }
        inline app::DemoEndState* create() {
            return il2cpp::create_object<app::DemoEndState>(get_class());
        }
    } // namespace DemoEndState
} // namespace app::classes::types
