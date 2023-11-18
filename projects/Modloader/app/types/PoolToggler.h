#pragma once
#include <Modloader/app/structs/PoolToggler.h>
#include <Modloader/app/structs/PoolToggler__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace PoolToggler {
        inline app::PoolToggler__Class** type_info() {
            static app::PoolToggler__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::PoolToggler__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::PoolToggler__Class* get_class() {
            return il2cpp::get_class<app::PoolToggler__Class>(type_info(), "", "PoolToggler");
        }
        inline app::PoolToggler* create() {
            return il2cpp::create_object<app::PoolToggler>(get_class());
        }
    } // namespace PoolToggler
} // namespace app::classes::types
