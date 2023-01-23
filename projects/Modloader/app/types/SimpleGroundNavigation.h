#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SimpleGroundNavigation__Class.h>
#include <Modloader/app/structs/SimpleGroundNavigation.h>

namespace app::classes::types {
    namespace SimpleGroundNavigation {
        namespace {
            inline app::SimpleGroundNavigation__Class* type_info_ref = nullptr;
        }
        inline app::SimpleGroundNavigation__Class** type_info = &type_info_ref;
        inline app::SimpleGroundNavigation__Class* get_class() {
            return il2cpp::get_class<app::SimpleGroundNavigation__Class>(type_info, "Moon", "SimpleGroundNavigation");
        }
        inline app::SimpleGroundNavigation* create() {
            return il2cpp::create_object<app::SimpleGroundNavigation>(get_class());
        }
    } // namespace SimpleGroundNavigation
} // namespace app::classes::types
