#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ContactSwitch__Array__Class.h>
#include <Modloader/app/structs/ContactSwitch__Array.h>

namespace app::classes::types {
    namespace ContactSwitch__Array {
        namespace {
            inline app::ContactSwitch__Array__Class* type_info_ref = nullptr;
        }
        inline app::ContactSwitch__Array__Class** type_info = &type_info_ref;
        inline app::ContactSwitch__Array__Class* get_class() {
            return il2cpp::get_class<app::ContactSwitch__Array__Class>(type_info, "", "ContactSwitch[]");
        }
        inline app::ContactSwitch__Array* create() {
            return il2cpp::create_object<app::ContactSwitch__Array>(get_class());
        }
    } // namespace ContactSwitch__Array
} // namespace app::classes::types
