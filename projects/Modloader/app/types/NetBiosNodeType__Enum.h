#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NetBiosNodeType__Enum__Class.h>
#include <Modloader/app/structs/NetBiosNodeType__Enum.h>

namespace app::classes::types {
    namespace NetBiosNodeType__Enum {
        namespace {
            inline app::NetBiosNodeType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NetBiosNodeType__Enum__Class** type_info = &type_info_ref;
        inline app::NetBiosNodeType__Enum__Class* get_class() {
            return il2cpp::get_class<app::NetBiosNodeType__Enum__Class>(type_info, "System.Net.NetworkInformation", "NetBiosNodeType");
        }
        inline app::NetBiosNodeType__Enum* create() {
            return il2cpp::create_object<app::NetBiosNodeType__Enum>(get_class());
        }
    } // namespace NetBiosNodeType__Enum
} // namespace app::classes::types
