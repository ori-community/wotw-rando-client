#pragma once
#include <Modloader/app/structs/GL.h>
#include <Modloader/app/structs/GL__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GL {
        inline app::GL__Class** type_info() {
            static app::GL__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::GL__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::GL__Class* get_class() {
            return il2cpp::get_class<app::GL__Class>(type_info(), "UnityEngine", "GL");
        }
        inline app::GL* create() {
            return il2cpp::create_object<app::GL>(get_class());
        }
    } // namespace GL
} // namespace app::classes::types
