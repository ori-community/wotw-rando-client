#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrossContextDelegate__Class.h>
#include <Modloader/app/structs/CrossContextDelegate.h>

namespace app::classes::types {
    namespace CrossContextDelegate {
        namespace {
            inline app::CrossContextDelegate__Class* type_info_ref = nullptr;
        }
        inline app::CrossContextDelegate__Class** type_info = &type_info_ref;
        inline app::CrossContextDelegate__Class* get_class() {
            return il2cpp::get_class<app::CrossContextDelegate__Class>(type_info, "System.Runtime.Remoting.Contexts", "CrossContextDelegate");
        }
        inline app::CrossContextDelegate* create() {
            return il2cpp::create_object<app::CrossContextDelegate>(get_class());
        }
    } // namespace CrossContextDelegate
} // namespace app::classes::types
