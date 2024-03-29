#pragma once
#include <Modloader/app/structs/ConstraintEnumerator.h>
#include <Modloader/app/structs/ConstraintEnumerator__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintEnumerator {
        inline app::ConstraintEnumerator__Class** type_info() {
            static app::ConstraintEnumerator__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintEnumerator__Class**)(modloader::win::memory::resolve_rva(0x04711C78));
            }
            return cache;
        }
        inline app::ConstraintEnumerator__Class* get_class() {
            return il2cpp::get_class<app::ConstraintEnumerator__Class>(type_info(), "System.Data", "ConstraintEnumerator");
        }
        inline app::ConstraintEnumerator* create() {
            return il2cpp::create_object<app::ConstraintEnumerator>(get_class());
        }
    } // namespace ConstraintEnumerator
} // namespace app::classes::types
