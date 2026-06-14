#pragma once
#include <Modloader/app/structs/RecorderPostRender.h>
#include <Modloader/app/structs/RecorderPostRender__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderPostRender {
        inline app::RecorderPostRender__Class** type_info() {
            static app::RecorderPostRender__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderPostRender__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderPostRender__Class* get_class() {
            return il2cpp::get_class<app::RecorderPostRender__Class>(type_info(), "", "RecorderPostRender");
        }
        inline app::RecorderPostRender* create() {
            return il2cpp::create_object<app::RecorderPostRender>(get_class());
        }
    } // namespace RecorderPostRender
} // namespace app::classes::types
