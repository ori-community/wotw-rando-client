#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace WwiseSyncProcessor {
        inline app::WwiseSyncProcessor__Class** type_info = (app::WwiseSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x04729190));
        inline app::WwiseSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::WwiseSyncProcessor__Class>(type_info, "Moon.Wwise", "WwiseSyncProcessor");
        }
        inline app::WwiseSyncProcessor* create() {
            return il2cpp::create_object<app::WwiseSyncProcessor>(get_class());
        }
    } // namespace WwiseSyncProcessor
} // namespace app::classes::types
