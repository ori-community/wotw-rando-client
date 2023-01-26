#pragma once
#include <Modloader/app/structs/IPushable__Array.h>
#include <Modloader/app/structs/IPushable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IPushable__Array {
        inline app::IPushable__Array__Class** type_info() {
            static app::IPushable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IPushable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IPushable__Array__Class* get_class() {
            return il2cpp::get_class<app::IPushable__Array__Class>(type_info(), "", "IPushable[]");
        }
        inline app::IPushable__Array* create() {
            return il2cpp::create_object<app::IPushable__Array>(get_class());
        }
    } // namespace IPushable__Array
} // namespace app::classes::types
