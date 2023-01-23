#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FoxGrabber__Class.h>
#include <Modloader/app/structs/FoxGrabber.h>

namespace app::classes::types {
    namespace FoxGrabber {
        namespace {
            inline app::FoxGrabber__Class* type_info_ref = nullptr;
        }
        inline app::FoxGrabber__Class** type_info = &type_info_ref;
        inline app::FoxGrabber__Class* get_class() {
            return il2cpp::get_class<app::FoxGrabber__Class>(type_info, "", "FoxGrabber");
        }
        inline app::FoxGrabber* create() {
            return il2cpp::create_object<app::FoxGrabber>(get_class());
        }
    } // namespace FoxGrabber
} // namespace app::classes::types
