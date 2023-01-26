#pragma once
#include <Modloader/app/structs/IRejectable__Array.h>
#include <Modloader/app/structs/IRejectable__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IRejectable__Array {
        inline app::IRejectable__Array__Class** type_info() {
            static app::IRejectable__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::IRejectable__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::IRejectable__Array__Class* get_class() {
            return il2cpp::get_class<app::IRejectable__Array__Class>(type_info(), "ZenFulcrum.EmbeddedBrowser", "IRejectable[]");
        }
        inline app::IRejectable__Array* create() {
            return il2cpp::create_object<app::IRejectable__Array>(get_class());
        }
    } // namespace IRejectable__Array
} // namespace app::classes::types
