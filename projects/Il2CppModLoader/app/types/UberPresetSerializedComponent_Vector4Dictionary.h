#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_Vector4Dictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_Vector4Dictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_Vector4Dictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_Vector4Dictionary__Class>(type_info, "", "UberPresetSerializedComponent", "Vector4Dictionary");
        }
        inline app::UberPresetSerializedComponent_Vector4Dictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_Vector4Dictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_Vector4Dictionary
} // namespace app::classes::types
