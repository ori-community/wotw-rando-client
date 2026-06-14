#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector4Dictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector4Dictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_Vector4Dictionary {
        inline app::UberPresetSerializedComponent_Vector4Dictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_Vector4Dictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_Vector4Dictionary__Class**)(modloader::win::memory::resolve_rva(0x0474E7F0));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_Vector4Dictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_Vector4Dictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "Vector4Dictionary");
        }
        inline app::UberPresetSerializedComponent_Vector4Dictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_Vector4Dictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_Vector4Dictionary
} // namespace app::classes::types
