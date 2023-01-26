#pragma once
#include <Modloader/app/structs/CanvasCameraHooker.h>
#include <Modloader/app/structs/CanvasCameraHooker__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CanvasCameraHooker {
        inline app::CanvasCameraHooker__Class** type_info() {
            static app::CanvasCameraHooker__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CanvasCameraHooker__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CanvasCameraHooker__Class* get_class() {
            return il2cpp::get_class<app::CanvasCameraHooker__Class>(type_info(), "", "CanvasCameraHooker");
        }
        inline app::CanvasCameraHooker* create() {
            return il2cpp::create_object<app::CanvasCameraHooker>(get_class());
        }
    } // namespace CanvasCameraHooker
} // namespace app::classes::types
