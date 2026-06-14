#pragma once
#include <Modloader/app/structs/EnvironmentLight__Array.h>
#include <Modloader/app/structs/EnvironmentLight__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace EnvironmentLight__Array {
        inline app::EnvironmentLight__Array__Class** type_info() {
            static app::EnvironmentLight__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::EnvironmentLight__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::EnvironmentLight__Array__Class* get_class() {
            return il2cpp::get_class<app::EnvironmentLight__Array__Class>(type_info(), "", "EnvironmentLight[]");
        }
        inline app::EnvironmentLight__Array* create() {
            return il2cpp::create_object<app::EnvironmentLight__Array>(get_class());
        }
    } // namespace EnvironmentLight__Array
} // namespace app::classes::types
