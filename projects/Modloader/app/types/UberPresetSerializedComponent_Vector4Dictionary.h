#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector4Dictionary__Class.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector4Dictionary.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_Vector4Dictionary {
        inline app::UberPresetSerializedComponent_Vector4Dictionary__Class** type_info = (app::UberPresetSerializedComponent_Vector4Dictionary__Class**)(modloader::win::memory::resolve_rva(0x0474E7F0));
        inline app::UberPresetSerializedComponent_Vector4Dictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_Vector4Dictionary__Class>(type_info, "", "UberPresetSerializedComponent", "Vector4Dictionary");
        }
        inline app::UberPresetSerializedComponent_Vector4Dictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_Vector4Dictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_Vector4Dictionary
} // namespace app::classes::types
