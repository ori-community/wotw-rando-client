#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Recorder {
        inline app::Recorder__Class** type_info = (app::Recorder__Class**)(modloader::win::memory::resolve_rva(0x04741808));
        inline app::Recorder__Class* get_class() {
            return il2cpp::get_class<app::Recorder__Class>(type_info, "UnityEngine.Profiling", "Recorder");
        }
        inline app::Recorder* create() {
            return il2cpp::create_object<app::Recorder>(get_class());
        }
    } // namespace Recorder
} // namespace app::classes::types
