#pragma once
#include <Modloader/app/structs/GasballChase.h>
#include <Modloader/app/structs/GasballChase__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GasballChase {
        inline app::GasballChase__Class** type_info() {
            static app::GasballChase__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GasballChase__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GasballChase__Class* get_class() {
            return il2cpp::get_class<app::GasballChase__Class>(type_info(), "", "GasballChase");
        }
        inline app::GasballChase* create() {
            return il2cpp::create_object<app::GasballChase>(get_class());
        }
    } // namespace GasballChase
} // namespace app::classes::types
