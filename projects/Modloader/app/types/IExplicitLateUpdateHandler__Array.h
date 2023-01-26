#pragma once
#include <Modloader/app/structs/IExplicitLateUpdateHandler__Array.h>
#include <Modloader/app/structs/IExplicitLateUpdateHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitLateUpdateHandler__Array {
        inline app::IExplicitLateUpdateHandler__Array__Class** type_info() {
            static app::IExplicitLateUpdateHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IExplicitLateUpdateHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IExplicitLateUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IExplicitLateUpdateHandler__Array__Class>(type_info(), "Moon", "IExplicitLateUpdateHandler[]");
        }
        inline app::IExplicitLateUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IExplicitLateUpdateHandler__Array>(get_class());
        }
    } // namespace IExplicitLateUpdateHandler__Array
} // namespace app::classes::types
