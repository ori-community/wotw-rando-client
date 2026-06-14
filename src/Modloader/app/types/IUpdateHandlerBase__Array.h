#pragma once
#include <Modloader/app/structs/IUpdateHandlerBase__Array.h>
#include <Modloader/app/structs/IUpdateHandlerBase__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IUpdateHandlerBase__Array {
        inline app::IUpdateHandlerBase__Array__Class** type_info() {
            static app::IUpdateHandlerBase__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IUpdateHandlerBase__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IUpdateHandlerBase__Array__Class* get_class() {
            return il2cpp::get_class<app::IUpdateHandlerBase__Array__Class>(type_info(), "Moon", "IUpdateHandlerBase[]");
        }
        inline app::IUpdateHandlerBase__Array* create() {
            return il2cpp::create_object<app::IUpdateHandlerBase__Array>(get_class());
        }
    } // namespace IUpdateHandlerBase__Array
} // namespace app::classes::types
