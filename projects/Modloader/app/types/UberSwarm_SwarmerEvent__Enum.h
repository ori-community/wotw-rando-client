#pragma once
#include <Modloader/app/structs/UberSwarm_SwarmerEvent__Enum.h>
#include <Modloader/app/structs/UberSwarm_SwarmerEvent__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberSwarm_SwarmerEvent__Enum {
        inline app::UberSwarm_SwarmerEvent__Enum__Class** type_info() {
            static app::UberSwarm_SwarmerEvent__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberSwarm_SwarmerEvent__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberSwarm_SwarmerEvent__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::UberSwarm_SwarmerEvent__Enum__Class>(type_info(), "", "UberSwarm", "SwarmerEvent");
        }
        inline app::UberSwarm_SwarmerEvent__Enum* create() {
            return il2cpp::create_object<app::UberSwarm_SwarmerEvent__Enum>(get_class());
        }
    } // namespace UberSwarm_SwarmerEvent__Enum
} // namespace app::classes::types
