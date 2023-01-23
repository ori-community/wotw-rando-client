#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LocationChanger__Class.h>
#include <Modloader/app/structs/LocationChanger.h>

namespace app::classes::types {
    namespace LocationChanger {
        namespace {
            inline app::LocationChanger__Class* type_info_ref = nullptr;
        }
        inline app::LocationChanger__Class** type_info = &type_info_ref;
        inline app::LocationChanger__Class* get_class() {
            return il2cpp::get_class<app::LocationChanger__Class>(type_info, "", "LocationChanger");
        }
        inline app::LocationChanger* create() {
            return il2cpp::create_object<app::LocationChanger>(get_class());
        }
    } // namespace LocationChanger
} // namespace app::classes::types
