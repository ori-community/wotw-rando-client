#pragma once
#include <Modloader/app/structs/CausalityRelation__Enum.h>
#include <Modloader/app/structs/CausalityRelation__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace CausalityRelation__Enum {
        inline app::CausalityRelation__Enum__Class** type_info() {
            static app::CausalityRelation__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::CausalityRelation__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::CausalityRelation__Enum__Class* get_class() {
            return il2cpp::get_class<app::CausalityRelation__Enum__Class>(type_info(), "System.Threading.Tasks", "CausalityRelation");
        }
        inline app::CausalityRelation__Enum* create() {
            return il2cpp::create_object<app::CausalityRelation__Enum>(get_class());
        }
    } // namespace CausalityRelation__Enum
} // namespace app::classes::types
