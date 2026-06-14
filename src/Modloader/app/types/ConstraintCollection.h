#pragma once
#include <Modloader/app/structs/ConstraintCollection.h>
#include <Modloader/app/structs/ConstraintCollection__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ConstraintCollection {
        inline app::ConstraintCollection__Class** type_info() {
            static app::ConstraintCollection__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::ConstraintCollection__Class**)(modloader::win::memory::resolve_rva(0x0474B958));
            }
            return cache;
        }
        inline app::ConstraintCollection__Class* get_class() {
            return il2cpp::get_class<app::ConstraintCollection__Class>(type_info(), "System.Data", "ConstraintCollection");
        }
        inline app::ConstraintCollection* create() {
            return il2cpp::create_object<app::ConstraintCollection>(get_class());
        }
    } // namespace ConstraintCollection
} // namespace app::classes::types
