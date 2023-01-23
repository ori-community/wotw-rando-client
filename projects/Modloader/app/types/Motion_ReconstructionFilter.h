#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Motion_ReconstructionFilter__Class.h>
#include <Modloader/app/structs/Motion_ReconstructionFilter.h>

namespace app::classes::types {
    namespace Motion_ReconstructionFilter {
        inline app::Motion_ReconstructionFilter__Class** type_info = (app::Motion_ReconstructionFilter__Class**)(modloader::win::memory::resolve_rva(0x04795D58));
        inline app::Motion_ReconstructionFilter__Class* get_class() {
            return il2cpp::get_nested_class<app::Motion_ReconstructionFilter__Class>(type_info, "Kino", "Motion", "ReconstructionFilter");
        }
        inline app::Motion_ReconstructionFilter* create() {
            return il2cpp::create_object<app::Motion_ReconstructionFilter>(get_class());
        }
    } // namespace Motion_ReconstructionFilter
} // namespace app::classes::types
