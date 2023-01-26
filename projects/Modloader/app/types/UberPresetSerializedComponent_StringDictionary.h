#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_StringDictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_StringDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_StringDictionary {
        inline app::UberPresetSerializedComponent_StringDictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_StringDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_StringDictionary__Class**)(modloader::win::memory::resolve_rva(0x04756558));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_StringDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_StringDictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "StringDictionary");
        }
        inline app::UberPresetSerializedComponent_StringDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_StringDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_StringDictionary
} // namespace app::classes::types
