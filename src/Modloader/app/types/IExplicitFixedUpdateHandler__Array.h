#pragma once
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Array.h>
#include <Modloader/app/structs/IExplicitFixedUpdateHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IExplicitFixedUpdateHandler__Array {
        inline app::IExplicitFixedUpdateHandler__Array__Class** type_info() {
            static app::IExplicitFixedUpdateHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IExplicitFixedUpdateHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IExplicitFixedUpdateHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IExplicitFixedUpdateHandler__Array__Class>(type_info(), "Moon", "IExplicitFixedUpdateHandler[]");
        }
        inline app::IExplicitFixedUpdateHandler__Array* create() {
            return il2cpp::create_object<app::IExplicitFixedUpdateHandler__Array>(get_class());
        }
    } // namespace IExplicitFixedUpdateHandler__Array
} // namespace app::classes::types
