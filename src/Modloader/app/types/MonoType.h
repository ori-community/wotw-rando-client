#pragma once
#include <Modloader/app/structs/MonoType.h>
#include <Modloader/app/structs/MonoType__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MonoType {
        inline app::MonoType__Class** type_info() {
            static app::MonoType__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::MonoType__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::MonoType__Class* get_class() {
            return il2cpp::get_class<app::MonoType__Class>(type_info(), "System", "MonoType");
        }
        inline app::MonoType* create() {
            return il2cpp::create_object<app::MonoType>(get_class());
        }
    } // namespace MonoType
} // namespace app::classes::types
