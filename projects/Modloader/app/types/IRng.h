#pragma once
#include <Modloader/app/structs/IRng.h>
#include <Modloader/app/structs/IRng__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRng {
        inline app::IRng__Class** type_info() {
            static app::IRng__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IRng__Class**)(modloader::win::memory::resolve_rva(0x047837D0));
            }
            return cache;
        }
        inline app::IRng__Class* get_class() {
            return il2cpp::get_class<app::IRng__Class>(type_info(), "Moon", "IRng");
        }
    } // namespace IRng
} // namespace app::classes::types
