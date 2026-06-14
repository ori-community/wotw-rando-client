#pragma once
#include <Modloader/app/structs/Recorder_c.h>
#include <Modloader/app/structs/Recorder_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recorder_c {
        inline app::Recorder_c__Class** type_info() {
            static app::Recorder_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Recorder_c__Class**)(modloader::win::memory::resolve_rva(0x0471EE60));
            }
            return cache;
        }
        inline app::Recorder_c__Class* get_class() {
            return il2cpp::get_nested_class<app::Recorder_c__Class>(type_info(), "", "Recorder", "<>c");
        }
        inline app::Recorder_c* create() {
            return il2cpp::create_object<app::Recorder_c>(get_class());
        }
    } // namespace Recorder_c
} // namespace app::classes::types
