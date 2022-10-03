#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace FloatStateMap_Mapping__Array {
        namespace {
            app::FloatStateMap_Mapping__Array__Class* type_info_ref = nullptr;
        }
        app::FloatStateMap_Mapping__Array__Class** type_info = &type_info_ref;
        inline app::FloatStateMap_Mapping__Array__Class* get_class() {
            return il2cpp::get_class<app::FloatStateMap_Mapping__Array__Class>(type_info, "", "FloatStateMap+Mapping[]");
        }
        inline app::FloatStateMap_Mapping__Array* create() {
            return il2cpp::create_object<app::FloatStateMap_Mapping__Array>(get_class());
        }
    } // namespace FloatStateMap_Mapping__Array
} // namespace app::classes::types
