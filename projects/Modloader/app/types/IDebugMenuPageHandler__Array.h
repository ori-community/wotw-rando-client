#pragma once
#include <Modloader/app/structs/IDebugMenuPageHandler__Array.h>
#include <Modloader/app/structs/IDebugMenuPageHandler__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IDebugMenuPageHandler__Array {
        inline app::IDebugMenuPageHandler__Array__Class** type_info() {
            static app::IDebugMenuPageHandler__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IDebugMenuPageHandler__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IDebugMenuPageHandler__Array__Class* get_class() {
            return il2cpp::get_class<app::IDebugMenuPageHandler__Array__Class>(type_info(), "", "IDebugMenuPageHandler[]");
        }
        inline app::IDebugMenuPageHandler__Array* create() {
            return il2cpp::create_object<app::IDebugMenuPageHandler__Array>(get_class());
        }
    } // namespace IDebugMenuPageHandler__Array
} // namespace app::classes::types
