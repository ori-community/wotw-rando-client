#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_IntDictionary {
        extern IL2CPP_MODLOADER_DLLEXPORT app::UberPresetSerializedComponent_IntDictionary__Class** type_info;
        inline app::UberPresetSerializedComponent_IntDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_IntDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "IntDictionary");
        }
        inline app::UberPresetSerializedComponent_IntDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_IntDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_IntDictionary
} // namespace app::classes::types
