#pragma once
#include <Modloader/app/structs/IUpdateable__Array.h>
#include <Modloader/app/structs/IUpdateable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateable__Array {
        inline app::IUpdateable__Array__Class** type_info() {
            static app::IUpdateable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUpdateable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUpdateable__Array__Class* get_class() {
            return il2cpp::get_class<app::IUpdateable__Array__Class>(type_info(), "SystemIntegration", "IUpdateable[]");
        }
        inline app::IUpdateable__Array* create() {
            return il2cpp::create_object<app::IUpdateable__Array>(get_class());
        }
    } // namespace IUpdateable__Array
} // namespace app::classes::types
