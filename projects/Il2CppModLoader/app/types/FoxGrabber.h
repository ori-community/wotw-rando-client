#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FoxGrabber {
        namespace {
            app::FoxGrabber__Class* type_info_ref = nullptr;
        }
        app::FoxGrabber__Class** type_info = &type_info_ref;
        inline app::FoxGrabber__Class* get_class() {
            return il2cpp::get_class<app::FoxGrabber__Class>(type_info, "", "FoxGrabber");
        }
        inline app::FoxGrabber* create() {
            return il2cpp::create_object<app::FoxGrabber>(get_class());
        }
    } // namespace FoxGrabber
} // namespace app::classes::types
