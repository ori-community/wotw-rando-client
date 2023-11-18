#pragma once
#include <Modloader/app/structs/NameInfo_1__Array.h>
#include <Modloader/app/structs/NameInfo_1__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace NameInfo_1__Array {
        inline app::NameInfo_1__Array__Class** type_info() {
            static app::NameInfo_1__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::NameInfo_1__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::NameInfo_1__Array__Class* get_class() {
            return il2cpp::get_class<app::NameInfo_1__Array__Class>(type_info(), "System.Diagnostics.Tracing", "NameInfo[]");
        }
        inline app::NameInfo_1__Array* create() {
            return il2cpp::create_object<app::NameInfo_1__Array>(get_class());
        }
    } // namespace NameInfo_1__Array
} // namespace app::classes::types
