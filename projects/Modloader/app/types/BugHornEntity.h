#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace BugHornEntity {
        inline app::BugHornEntity__Class** type_info = (app::BugHornEntity__Class**)(modloader::win::memory::resolve_rva(0x0470D408));
        inline app::BugHornEntity__Class* get_class() {
            return il2cpp::get_class<app::BugHornEntity__Class>(type_info, "", "BugHornEntity");
        }
        inline app::BugHornEntity* create() {
            return il2cpp::create_object<app::BugHornEntity>(get_class());
        }
    } // namespace BugHornEntity
} // namespace app::classes::types
