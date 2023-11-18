#pragma once
#include <Modloader/app/structs/ChainLevelAndCount__Array.h>
#include <Modloader/app/structs/ChainLevelAndCount__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ChainLevelAndCount__Array {
        inline app::ChainLevelAndCount__Array__Class** type_info() {
            static app::ChainLevelAndCount__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ChainLevelAndCount__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ChainLevelAndCount__Array__Class* get_class() {
            return il2cpp::get_class<app::ChainLevelAndCount__Array__Class>(type_info(), "Motvin.Collections", "ChainLevelAndCount[]");
        }
        inline app::ChainLevelAndCount__Array* create() {
            return il2cpp::create_object<app::ChainLevelAndCount__Array>(get_class());
        }
    } // namespace ChainLevelAndCount__Array
} // namespace app::classes::types
