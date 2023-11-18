#pragma once
#include <Modloader/app/structs/IConstrainedEntityWithChildren.h>
#include <Modloader/app/structs/IConstrainedEntityWithChildren__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConstrainedEntityWithChildren {
        inline app::IConstrainedEntityWithChildren__Class** type_info() {
            static app::IConstrainedEntityWithChildren__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConstrainedEntityWithChildren__Class**)(modloader::win::memory::resolve_rva(0x047729A8));
            }
            return cache;
        }
        inline app::IConstrainedEntityWithChildren__Class* get_class() {
            return il2cpp::get_class<app::IConstrainedEntityWithChildren__Class>(type_info(), "Moon.Timeline.Constraints", "IConstrainedEntityWithChildren");
        }
    } // namespace IConstrainedEntityWithChildren
} // namespace app::classes::types
