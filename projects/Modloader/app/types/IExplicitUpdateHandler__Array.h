#pragma once
#include <Modloader/app/structs/IExplicitUpdateHandler__Array.h>
#include <Modloader/app/structs/IExplicitUpdateHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitUpdateHandler__Array {
        inline app::IExplicitUpdateHandler__Array__Class** type_info() {
            static app::IExplicitUpdateHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IExplicitUpdateHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IExplicitUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IExplicitUpdateHandler__Array__Class>(type_info(), "Moon", "IExplicitUpdateHandler[]");
        }
        inline app::IExplicitUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IExplicitUpdateHandler__Array>(get_class());
        }
    } // namespace IExplicitUpdateHandler__Array
} // namespace app::classes::types
