#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WindupSwitch__Class.h>
#include <Modloader/app/structs/WindupSwitch.h>

namespace app::classes::types {
    namespace WindupSwitch {
        namespace {
            inline app::WindupSwitch__Class* type_info_ref = nullptr;
        }
        inline app::WindupSwitch__Class** type_info = &type_info_ref;
        inline app::WindupSwitch__Class* get_class() {
            return il2cpp::get_class<app::WindupSwitch__Class>(type_info, "", "WindupSwitch");
        }
        inline app::WindupSwitch* create() {
            return il2cpp::create_object<app::WindupSwitch>(get_class());
        }
    } // namespace WindupSwitch
} // namespace app::classes::types
