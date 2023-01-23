#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IEntityHighlight__Class.h>

namespace app::classes::types {
    namespace IEntityHighlight {
        inline app::IEntityHighlight__Class** type_info = (app::IEntityHighlight__Class**)(modloader::win::memory::resolve_rva(0x04753518));
        inline app::IEntityHighlight__Class* get_class() {
            return il2cpp::get_class<app::IEntityHighlight__Class>(type_info, "", "IEntityHighlight");
        }
    } // namespace IEntityHighlight
} // namespace app::classes::types
