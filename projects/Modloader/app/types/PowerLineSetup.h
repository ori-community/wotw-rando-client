#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PowerLineSetup__Class.h>
#include <Modloader/app/structs/PowerLineSetup.h>

namespace app::classes::types {
    namespace PowerLineSetup {
        namespace {
            inline app::PowerLineSetup__Class* type_info_ref = nullptr;
        }
        inline app::PowerLineSetup__Class** type_info = &type_info_ref;
        inline app::PowerLineSetup__Class* get_class() {
            return il2cpp::get_class<app::PowerLineSetup__Class>(type_info, "", "PowerLineSetup");
        }
        inline app::PowerLineSetup* create() {
            return il2cpp::create_object<app::PowerLineSetup>(get_class());
        }
    } // namespace PowerLineSetup
} // namespace app::classes::types
