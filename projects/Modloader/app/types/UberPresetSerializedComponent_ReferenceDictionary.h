#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_ReferenceDictionary__Class.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_ReferenceDictionary.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_ReferenceDictionary {
        inline app::UberPresetSerializedComponent_ReferenceDictionary__Class** type_info = (app::UberPresetSerializedComponent_ReferenceDictionary__Class**)(modloader::win::memory::resolve_rva(0x04722598));
        inline app::UberPresetSerializedComponent_ReferenceDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_ReferenceDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "ReferenceDictionary");
        }
        inline app::UberPresetSerializedComponent_ReferenceDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_ReferenceDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_ReferenceDictionary
} // namespace app::classes::types
