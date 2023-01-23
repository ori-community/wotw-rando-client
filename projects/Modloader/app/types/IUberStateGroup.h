#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IUberStateGroup__Class.h>

namespace app::classes::types {
    namespace IUberStateGroup {
        inline app::IUberStateGroup__Class** type_info = (app::IUberStateGroup__Class**)(modloader::win::memory::resolve_rva(0x0471FA68));
        inline app::IUberStateGroup__Class* get_class() {
            return il2cpp::get_class<app::IUberStateGroup__Class>(type_info, "Moon", "IUberStateGroup");
        }
    } // namespace IUberStateGroup
} // namespace app::classes::types
