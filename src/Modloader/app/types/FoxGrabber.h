#pragma once
#include <Modloader/app/structs/FoxGrabber.h>
#include <Modloader/app/structs/FoxGrabber__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace FoxGrabber {
        inline app::FoxGrabber__Class** type_info() {
            static app::FoxGrabber__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::FoxGrabber__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::FoxGrabber__Class* get_class() {
            return il2cpp::get_class<app::FoxGrabber__Class>(type_info(), "", "FoxGrabber");
        }
        inline app::FoxGrabber* create() {
            return il2cpp::create_object<app::FoxGrabber>(get_class());
        }
    } // namespace FoxGrabber
} // namespace app::classes::types
