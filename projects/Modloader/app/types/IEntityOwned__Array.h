#pragma once
#include <Modloader/app/structs/IEntityOwned__Array.h>
#include <Modloader/app/structs/IEntityOwned__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IEntityOwned__Array {
        inline app::IEntityOwned__Array__Class** type_info() {
            static app::IEntityOwned__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IEntityOwned__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IEntityOwned__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntityOwned__Array__Class>(type_info(), "Moon", "IEntityOwned[]");
        }
        inline app::IEntityOwned__Array* create() {
            return il2cpp::create_object<app::IEntityOwned__Array>(get_class());
        }
    } // namespace IEntityOwned__Array
} // namespace app::classes::types
