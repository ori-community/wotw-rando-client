#pragma once
#include <Modloader/app/structs/Motion_ReconstructionFilter.h>
#include <Modloader/app/structs/Motion_ReconstructionFilter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Motion_ReconstructionFilter {
        inline app::Motion_ReconstructionFilter__Class** type_info() {
            static app::Motion_ReconstructionFilter__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Motion_ReconstructionFilter__Class**)(modloader::win::memory::resolve_rva(0x04795D58));
            }
            return cache;
        }
        inline app::Motion_ReconstructionFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::Motion_ReconstructionFilter__Class>(type_info(), "Kino", "Motion", "ReconstructionFilter");
        }
        inline app::Motion_ReconstructionFilter* create() {
            return il2cpp::create_object<app::Motion_ReconstructionFilter>(get_class());
        }
    } // namespace Motion_ReconstructionFilter
} // namespace app::classes::types
