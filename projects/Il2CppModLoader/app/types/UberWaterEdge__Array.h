#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterEdge__Array {
        namespace {
            app::UberWaterEdge__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterEdge__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterEdge__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterEdge__Array__Class>(type_info, "", "UberWaterEdge[]");
        }
        inline app::UberWaterEdge__Array* create() {
            return il2cpp::create_object<app::UberWaterEdge__Array>(get_class());
        }
    } // namespace UberWaterEdge__Array
} // namespace app::classes::types
