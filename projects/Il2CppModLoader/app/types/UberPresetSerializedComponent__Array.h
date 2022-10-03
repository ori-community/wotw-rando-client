#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent__Array {
        namespace {
            app::UberPresetSerializedComponent__Array__Class* type_info_ref = nullptr;
        }
        app::UberPresetSerializedComponent__Array__Class** type_info = &type_info_ref;
        inline app::UberPresetSerializedComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPresetSerializedComponent__Array__Class>(type_info, "", "UberPresetSerializedComponent[]");
        }
        inline app::UberPresetSerializedComponent__Array* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent__Array>(get_class());
        }
    } // namespace UberPresetSerializedComponent__Array
} // namespace app::classes::types
