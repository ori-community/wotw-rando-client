#pragma once
#include <Modloader/app/structs/WwiseSyncProcessor.h>
#include <Modloader/app/structs/WwiseSyncProcessor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WwiseSyncProcessor {
        inline app::WwiseSyncProcessor__Class** type_info() {
            static app::WwiseSyncProcessor__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::WwiseSyncProcessor__Class**)(modloader::win::memory::resolve_rva(0x04729190));
            }
            return cache;
        }
        inline app::WwiseSyncProcessor__Class* get_class() {
            return il2cpp::get_class<app::WwiseSyncProcessor__Class>(type_info(), "Moon.Wwise", "WwiseSyncProcessor");
        }
        inline app::WwiseSyncProcessor* create() {
            return il2cpp::create_object<app::WwiseSyncProcessor>(get_class());
        }
    } // namespace WwiseSyncProcessor
} // namespace app::classes::types
