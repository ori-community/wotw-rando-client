#pragma once
#include <Modloader/app/structs/BlendVector3.h>
#include <Modloader/app/structs/BlendVector3__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendVector3 {
        inline app::BlendVector3__Class** type_info() {
            static app::BlendVector3__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendVector3__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendVector3__Class* get_class() {
            return il2cpp::get_class<app::BlendVector3__Class>(type_info(), "", "BlendVector3");
        }
        inline app::BlendVector3* create() {
            return il2cpp::create_object<app::BlendVector3>(get_class());
        }
    } // namespace BlendVector3
} // namespace app::classes::types
