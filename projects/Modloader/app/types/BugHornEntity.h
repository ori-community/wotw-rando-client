#pragma once
#include <Modloader/app/structs/BugHornEntity.h>
#include <Modloader/app/structs/BugHornEntity__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BugHornEntity {
        inline app::BugHornEntity__Class** type_info() {
            static app::BugHornEntity__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::BugHornEntity__Class**)(modloader::win::memory::resolve_rva(0x0470D408));
            }
            return cache;
        }
        inline app::BugHornEntity__Class* get_class() {
            return il2cpp::get_class<app::BugHornEntity__Class>(type_info(), "", "BugHornEntity");
        }
        inline app::BugHornEntity* create() {
            return il2cpp::create_object<app::BugHornEntity>(get_class());
        }
    } // namespace BugHornEntity
} // namespace app::classes::types
