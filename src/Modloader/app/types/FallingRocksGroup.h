#pragma once
#include <Modloader/app/structs/FallingRocksGroup.h>
#include <Modloader/app/structs/FallingRocksGroup__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FallingRocksGroup {
        inline app::FallingRocksGroup__Class** type_info() {
            static app::FallingRocksGroup__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FallingRocksGroup__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FallingRocksGroup__Class* get_class() {
            return il2cpp::get_class<app::FallingRocksGroup__Class>(type_info(), "", "FallingRocksGroup");
        }
        inline app::FallingRocksGroup* create() {
            return il2cpp::create_object<app::FallingRocksGroup>(get_class());
        }
    } // namespace FallingRocksGroup
} // namespace app::classes::types
