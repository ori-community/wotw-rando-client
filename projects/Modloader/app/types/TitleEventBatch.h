#pragma once
#include <Modloader/app/structs/TitleEventBatch.h>
#include <Modloader/app/structs/TitleEventBatch__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace TitleEventBatch {
        inline app::TitleEventBatch__Class** type_info() {
            static app::TitleEventBatch__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::TitleEventBatch__Class**)(modloader::win::memory::resolve_rva(0x04794F48));
            }
            return cache;
        }
        inline app::TitleEventBatch__Class* get_class() {
            return il2cpp::get_class<app::TitleEventBatch__Class>(type_info(), "PlayFab.Pipeline", "TitleEventBatch");
        }
        inline app::TitleEventBatch* create() {
            return il2cpp::create_object<app::TitleEventBatch>(get_class());
        }
    } // namespace TitleEventBatch
} // namespace app::classes::types
