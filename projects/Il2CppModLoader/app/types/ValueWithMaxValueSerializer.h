#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ValueWithMaxValueSerializer {
        namespace {
            app::ValueWithMaxValueSerializer__Class* type_info_ref = nullptr;
        }
        app::ValueWithMaxValueSerializer__Class** type_info = &type_info_ref;
        inline app::ValueWithMaxValueSerializer__Class* get_class() {
            return il2cpp::get_class<app::ValueWithMaxValueSerializer__Class>(type_info, "", "ValueWithMaxValueSerializer");
        }
        inline app::ValueWithMaxValueSerializer* create() {
            return il2cpp::create_object<app::ValueWithMaxValueSerializer>(get_class());
        }
    } // namespace ValueWithMaxValueSerializer
} // namespace app::classes::types
