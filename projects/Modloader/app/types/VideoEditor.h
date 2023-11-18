#pragma once
#include <Modloader/app/structs/VideoEditor.h>
#include <Modloader/app/structs/VideoEditor__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoEditor {
        inline app::VideoEditor__Class** type_info() {
            static app::VideoEditor__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoEditor__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoEditor__Class* get_class() {
            return il2cpp::get_class<app::VideoEditor__Class>(type_info(), "", "VideoEditor");
        }
        inline app::VideoEditor* create() {
            return il2cpp::create_object<app::VideoEditor>(get_class());
        }
    } // namespace VideoEditor
} // namespace app::classes::types
