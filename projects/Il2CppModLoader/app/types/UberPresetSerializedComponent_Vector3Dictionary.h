#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_Vector3Dictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_Vector3Dictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_Vector3Dictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_Vector3Dictionary__Class>(type_info, "", "UberPresetSerializedComponent", "Vector3Dictionary");
        }
        inline app::UberPresetSerializedComponent_Vector3Dictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_Vector3Dictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_Vector3Dictionary
} // namespace app::classes::types
