#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_BoolDictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_BoolDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_BoolDictionary {
        inline app::UberPresetSerializedComponent_BoolDictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_BoolDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_BoolDictionary__Class**)(modloader::win::memory::resolve_rva(0x0478BA80));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_BoolDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_BoolDictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "BoolDictionary");
        }
        inline app::UberPresetSerializedComponent_BoolDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_BoolDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_BoolDictionary
} // namespace app::classes::types
