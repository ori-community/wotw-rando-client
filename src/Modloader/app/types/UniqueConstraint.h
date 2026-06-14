#pragma once
#include <Modloader/app/structs/UniqueConstraint.h>
#include <Modloader/app/structs/UniqueConstraint__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UniqueConstraint {
        inline app::UniqueConstraint__Class** type_info() {
            static app::UniqueConstraint__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UniqueConstraint__Class**)(modloader::win::memory::resolve_rva(0x04721658));
            }
            return cache;
        }
        inline app::UniqueConstraint__Class* get_class() {
            return il2cpp::get_class<app::UniqueConstraint__Class>(type_info(), "System.Data", "UniqueConstraint");
        }
        inline app::UniqueConstraint* create() {
            return il2cpp::create_object<app::UniqueConstraint>(get_class());
        }
    } // namespace UniqueConstraint
} // namespace app::classes::types
