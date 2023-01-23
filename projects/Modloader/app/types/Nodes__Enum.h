#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Nodes__Enum__Class.h>
#include <Modloader/app/structs/Nodes__Enum.h>

namespace app::classes::types {
    namespace Nodes__Enum {
        namespace {
            inline app::Nodes__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Nodes__Enum__Class** type_info = &type_info_ref;
        inline app::Nodes__Enum__Class* get_class() {
            return il2cpp::get_class<app::Nodes__Enum__Class>(type_info, "System.Data", "Nodes");
        }
        inline app::Nodes__Enum* create() {
            return il2cpp::create_object<app::Nodes__Enum>(get_class());
        }
    } // namespace Nodes__Enum
} // namespace app::classes::types
