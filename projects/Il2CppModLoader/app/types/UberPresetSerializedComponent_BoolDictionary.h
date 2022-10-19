#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_BoolDictionary {
        inline app::UberPresetSerializedComponent_BoolDictionary__Class** type_info = (app::UberPresetSerializedComponent_BoolDictionary__Class**)(modloader::win::memory::resolve_rva(0x0478BA80));
        inline app::UberPresetSerializedComponent_BoolDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_BoolDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "BoolDictionary");
        }
        inline app::UberPresetSerializedComponent_BoolDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_BoolDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_BoolDictionary
} // namespace app::classes::types
