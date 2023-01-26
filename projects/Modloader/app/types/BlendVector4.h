#pragma once
#include <Modloader/app/structs/BlendVector4.h>
#include <Modloader/app/structs/BlendVector4__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace BlendVector4 {
        inline app::BlendVector4__Class** type_info() {
            static app::BlendVector4__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::BlendVector4__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::BlendVector4__Class* get_class() {
            return il2cpp::get_class<app::BlendVector4__Class>(type_info(), "", "BlendVector4");
        }
        inline app::BlendVector4* create() {
            return il2cpp::create_object<app::BlendVector4>(get_class());
        }
    } // namespace BlendVector4
} // namespace app::classes::types
