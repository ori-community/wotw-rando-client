#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector2Dictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector2Dictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_Vector2Dictionary {
        inline app::UberPresetSerializedComponent_Vector2Dictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_Vector2Dictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_Vector2Dictionary__Class**)(modloader::win::memory::resolve_rva(0x04740290));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_Vector2Dictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_Vector2Dictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "Vector2Dictionary");
        }
        inline app::UberPresetSerializedComponent_Vector2Dictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_Vector2Dictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_Vector2Dictionary
} // namespace app::classes::types
