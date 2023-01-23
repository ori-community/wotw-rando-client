#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WellKnownObjectMode__Enum__Class.h>
#include <Modloader/app/structs/WellKnownObjectMode__Enum.h>

namespace app::classes::types {
    namespace WellKnownObjectMode__Enum {
        namespace {
            inline app::WellKnownObjectMode__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WellKnownObjectMode__Enum__Class** type_info = &type_info_ref;
        inline app::WellKnownObjectMode__Enum__Class* get_class() {
            return il2cpp::get_class<app::WellKnownObjectMode__Enum__Class>(type_info, "System.Runtime.Remoting", "WellKnownObjectMode");
        }
        inline app::WellKnownObjectMode__Enum* create() {
            return il2cpp::create_object<app::WellKnownObjectMode__Enum>(get_class());
        }
    } // namespace WellKnownObjectMode__Enum
} // namespace app::classes::types
