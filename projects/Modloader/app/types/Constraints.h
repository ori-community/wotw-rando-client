#pragma once
#include <Modloader/app/structs/Constraints.h>
#include <Modloader/app/structs/Constraints__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Constraints {
        inline app::Constraints__Class** type_info() {
            static app::Constraints__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Constraints__Class**)(modloader::win::memory::resolve_rva(0x04729C48));
            }
            return cache;
        }
        inline app::Constraints__Class* get_class() {
            return il2cpp::get_class<app::Constraints__Class>(type_info(), "RootMotion.FinalIK", "Constraints");
        }
        inline app::Constraints* create() {
            return il2cpp::create_object<app::Constraints>(get_class());
        }
    } // namespace Constraints
} // namespace app::classes::types
