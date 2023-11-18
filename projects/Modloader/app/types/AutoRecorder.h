#pragma once
#include <Modloader/app/structs/AutoRecorder.h>
#include <Modloader/app/structs/AutoRecorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace AutoRecorder {
        inline app::AutoRecorder__Class** type_info() {
            static app::AutoRecorder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::AutoRecorder__Class**)(modloader::win::memory::resolve_rva(0x04776F38));
            }
            return cache;
        }
        inline app::AutoRecorder__Class* get_class() {
            return il2cpp::get_class<app::AutoRecorder__Class>(type_info(), "", "AutoRecorder");
        }
        inline app::AutoRecorder* create() {
            return il2cpp::create_object<app::AutoRecorder>(get_class());
        }
    } // namespace AutoRecorder
} // namespace app::classes::types
