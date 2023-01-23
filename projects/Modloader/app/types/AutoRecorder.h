#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AutoRecorder__Class.h>
#include <Modloader/app/structs/AutoRecorder.h>

namespace app::classes::types {
    namespace AutoRecorder {
        inline app::AutoRecorder__Class** type_info = (app::AutoRecorder__Class**)(modloader::win::memory::resolve_rva(0x04776F38));
        inline app::AutoRecorder__Class* get_class() {
            return il2cpp::get_class<app::AutoRecorder__Class>(type_info, "", "AutoRecorder");
        }
        inline app::AutoRecorder* create() {
            return il2cpp::create_object<app::AutoRecorder>(get_class());
        }
    } // namespace AutoRecorder
} // namespace app::classes::types
