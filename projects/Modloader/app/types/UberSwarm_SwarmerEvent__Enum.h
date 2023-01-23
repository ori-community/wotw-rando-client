#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberSwarm_SwarmerEvent__Enum__Class.h>
#include <Modloader/app/structs/UberSwarm_SwarmerEvent__Enum.h>

namespace app::classes::types {
    namespace UberSwarm_SwarmerEvent__Enum {
        namespace {
            inline app::UberSwarm_SwarmerEvent__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UberSwarm_SwarmerEvent__Enum__Class** type_info = &type_info_ref;
        inline app::UberSwarm_SwarmerEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberSwarm_SwarmerEvent__Enum__Class>(type_info, "", "UberSwarm", "SwarmerEvent");
        }
        inline app::UberSwarm_SwarmerEvent__Enum* create() {
            return il2cpp::create_object<app::UberSwarm_SwarmerEvent__Enum>(get_class());
        }
    } // namespace UberSwarm_SwarmerEvent__Enum
} // namespace app::classes::types
