#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BondDataType__Enum__Class.h>
#include <Modloader/app/structs/BondDataType__Enum.h>

namespace app::classes::types {
    namespace BondDataType__Enum {
        namespace {
            inline app::BondDataType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::BondDataType__Enum__Class** type_info = &type_info_ref;
        inline app::BondDataType__Enum__Class* get_class() {
            return il2cpp::get_class<app::BondDataType__Enum__Class>(type_info, "Microsoft.Applications.Events", "BondDataType");
        }
        inline app::BondDataType__Enum* create() {
            return il2cpp::create_object<app::BondDataType__Enum>(get_class());
        }
    } // namespace BondDataType__Enum
} // namespace app::classes::types
