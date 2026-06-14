#pragma once
#include <Modloader/app/structs/RecorderMessagePlugin.h>
#include <Modloader/app/structs/RecorderMessagePlugin__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace RecorderMessagePlugin {
        inline app::RecorderMessagePlugin__Class** type_info() {
            static app::RecorderMessagePlugin__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::RecorderMessagePlugin__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::RecorderMessagePlugin__Class* get_class() {
            return il2cpp::get_class<app::RecorderMessagePlugin__Class>(type_info(), "", "RecorderMessagePlugin");
        }
        inline app::RecorderMessagePlugin* create() {
            return il2cpp::create_object<app::RecorderMessagePlugin>(get_class());
        }
    } // namespace RecorderMessagePlugin
} // namespace app::classes::types
