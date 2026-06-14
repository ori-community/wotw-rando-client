#pragma once
#include <Modloader/app/structs/IConstrainedEntity.h>
#include <Modloader/app/structs/IConstrainedEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IConstrainedEntity {
        inline app::IConstrainedEntity__Class** type_info() {
            static app::IConstrainedEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IConstrainedEntity__Class**)(modloader::win::memory::resolve_rva(0x0478DD18));
            }
            return cache;
        }
        inline app::IConstrainedEntity__Class* get_class() {
            return il2cpp::get_class<app::IConstrainedEntity__Class>(type_info(), "Moon.Timeline.Constraints", "IConstrainedEntity");
        }
    } // namespace IConstrainedEntity
} // namespace app::classes::types
