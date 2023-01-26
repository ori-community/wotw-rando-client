#pragma once
#include <Modloader/app/structs/VideoProgressBar.h>
#include <Modloader/app/structs/VideoProgressBar__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoProgressBar {
        inline app::VideoProgressBar__Class** type_info() {
            static app::VideoProgressBar__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoProgressBar__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoProgressBar__Class* get_class() {
            return il2cpp::get_class<app::VideoProgressBar__Class>(type_info(), "", "VideoProgressBar");
        }
        inline app::VideoProgressBar* create() {
            return il2cpp::create_object<app::VideoProgressBar>(get_class());
        }
    } // namespace VideoProgressBar
} // namespace app::classes::types
