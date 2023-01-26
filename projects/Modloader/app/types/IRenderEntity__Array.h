#pragma once
#include <Modloader/app/structs/IRenderEntity__Array.h>
#include <Modloader/app/structs/IRenderEntity__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRenderEntity__Array {
        inline app::IRenderEntity__Array__Class** type_info() {
            static app::IRenderEntity__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRenderEntity__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRenderEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::IRenderEntity__Array__Class>(type_info(), "Moon.VisualDebug", "IRenderEntity[]");
        }
        inline app::IRenderEntity__Array* create() {
            return il2cpp::create_object<app::IRenderEntity__Array>(get_class());
        }
    } // namespace IRenderEntity__Array
} // namespace app::classes::types
