#pragma once
#include <Modloader/app/structs/Recorder.h>
#include <Modloader/app/structs/Recorder__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Recorder {
        inline app::Recorder__Class** type_info() {
            static app::Recorder__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Recorder__Class**)(modloader::win::memory::resolve_rva(0x04741808));
            }
            return cache;
        }
        inline app::Recorder__Class* get_class() {
            return il2cpp::get_class<app::Recorder__Class>(type_info(), "UnityEngine.Profiling", "Recorder");
        }
        inline app::Recorder* create() {
            return il2cpp::create_object<app::Recorder>(get_class());
        }
    } // namespace Recorder
} // namespace app::classes::types
