#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MapStoneActivatedCondition {
        namespace {
            app::MapStoneActivatedCondition__Class* type_info_ref = nullptr;
        }
        app::MapStoneActivatedCondition__Class** type_info = &type_info_ref;
        inline app::MapStoneActivatedCondition__Class* get_class() {
            return il2cpp::get_class<app::MapStoneActivatedCondition__Class>(type_info, "", "MapStoneActivatedCondition");
        }
        inline app::MapStoneActivatedCondition* create() {
            return il2cpp::create_object<app::MapStoneActivatedCondition>(get_class());
        }
    } // namespace MapStoneActivatedCondition
} // namespace app::classes::types
