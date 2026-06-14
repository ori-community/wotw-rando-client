#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_ColorDictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_ColorDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_ColorDictionary {
        inline app::UberPresetSerializedComponent_ColorDictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_ColorDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_ColorDictionary__Class**)(modloader::win::memory::resolve_rva(0x04761D90));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_ColorDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_ColorDictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "ColorDictionary");
        }
        inline app::UberPresetSerializedComponent_ColorDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_ColorDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_ColorDictionary
} // namespace app::classes::types
