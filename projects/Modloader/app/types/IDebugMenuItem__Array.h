#pragma once
#include <Modloader/app/structs/IDebugMenuItem__Array.h>
#include <Modloader/app/structs/IDebugMenuItem__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuItem__Array {
        inline app::IDebugMenuItem__Array__Class** type_info() {
            static app::IDebugMenuItem__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDebugMenuItem__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDebugMenuItem__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuItem__Array__Class>(type_info(), "", "IDebugMenuItem[]");
        }
        inline app::IDebugMenuItem__Array* create() {
            return il2cpp::create_object<app::IDebugMenuItem__Array>(get_class());
        }
    } // namespace IDebugMenuItem__Array
} // namespace app::classes::types
