#pragma once
#include <Modloader/app/structs/IEntityHighlight.h>
#include <Modloader/app/structs/IEntityHighlight__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityHighlight {
        inline app::IEntityHighlight__Class** type_info() {
            static app::IEntityHighlight__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IEntityHighlight__Class**)(modloader::win::memory::resolve_rva(0x04753518));
            }
            return cache;
        }
        inline app::IEntityHighlight__Class* get_class() {
            return il2cpp::get_class<app::IEntityHighlight__Class>(type_info(), "", "IEntityHighlight");
        }
    } // namespace IEntityHighlight
} // namespace app::classes::types
