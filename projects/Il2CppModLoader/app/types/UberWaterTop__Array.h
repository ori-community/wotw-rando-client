#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberWaterTop__Array {
        namespace {
            app::UberWaterTop__Array__Class* type_info_ref = nullptr;
        }
        app::UberWaterTop__Array__Class** type_info = &type_info_ref;
        inline app::UberWaterTop__Array__Class* get_class() {
            return il2cpp::get_class<app::UberWaterTop__Array__Class>(type_info, "", "UberWaterTop[]");
        }
        inline app::UberWaterTop__Array* create() {
            return il2cpp::create_object<app::UberWaterTop__Array>(get_class());
        }
    } // namespace UberWaterTop__Array
} // namespace app::classes::types
