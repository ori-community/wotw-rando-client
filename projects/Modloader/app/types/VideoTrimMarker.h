#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VideoTrimMarker__Class.h>
#include <Modloader/app/structs/VideoTrimMarker.h>

namespace app::classes::types {
    namespace VideoTrimMarker {
        namespace {
            inline app::VideoTrimMarker__Class* type_info_ref = nullptr;
        }
        inline app::VideoTrimMarker__Class** type_info = &type_info_ref;
        inline app::VideoTrimMarker__Class* get_class() {
            return il2cpp::get_class<app::VideoTrimMarker__Class>(type_info, "", "VideoTrimMarker");
        }
        inline app::VideoTrimMarker* create() {
            return il2cpp::create_object<app::VideoTrimMarker>(get_class());
        }
    } // namespace VideoTrimMarker
} // namespace app::classes::types
