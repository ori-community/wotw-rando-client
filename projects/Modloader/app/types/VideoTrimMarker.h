#pragma once
#include <Modloader/app/structs/VideoTrimMarker.h>
#include <Modloader/app/structs/VideoTrimMarker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace VideoTrimMarker {
        inline app::VideoTrimMarker__Class** type_info() {
            static app::VideoTrimMarker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::VideoTrimMarker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::VideoTrimMarker__Class* get_class() {
            return il2cpp::get_class<app::VideoTrimMarker__Class>(type_info(), "", "VideoTrimMarker");
        }
        inline app::VideoTrimMarker* create() {
            return il2cpp::create_object<app::VideoTrimMarker>(get_class());
        }
    } // namespace VideoTrimMarker
} // namespace app::classes::types
