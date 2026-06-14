#pragma once
#include <Modloader/app/structs/ProtectiveLightRadial__Array.h>
#include <Modloader/app/structs/ProtectiveLightRadial__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace ProtectiveLightRadial__Array {
        inline app::ProtectiveLightRadial__Array__Class** type_info() {
            static app::ProtectiveLightRadial__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::ProtectiveLightRadial__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::ProtectiveLightRadial__Array__Class* get_class() {
            return il2cpp::get_class<app::ProtectiveLightRadial__Array__Class>(type_info(), "", "ProtectiveLightRadial[]");
        }
        inline app::ProtectiveLightRadial__Array* create() {
            return il2cpp::create_object<app::ProtectiveLightRadial__Array>(get_class());
        }
    } // namespace ProtectiveLightRadial__Array
} // namespace app::classes::types
