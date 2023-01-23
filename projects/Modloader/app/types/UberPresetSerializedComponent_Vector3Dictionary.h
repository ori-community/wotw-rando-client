#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector3Dictionary__Class.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_Vector3Dictionary.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_Vector3Dictionary {
        inline app::UberPresetSerializedComponent_Vector3Dictionary__Class** type_info = (app::UberPresetSerializedComponent_Vector3Dictionary__Class**)(modloader::win::memory::resolve_rva(0x0474BBD0));
        inline app::UberPresetSerializedComponent_Vector3Dictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_Vector3Dictionary__Class>(type_info, "", "UberPresetSerializedComponent", "Vector3Dictionary");
        }
        inline app::UberPresetSerializedComponent_Vector3Dictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_Vector3Dictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_Vector3Dictionary
} // namespace app::classes::types
