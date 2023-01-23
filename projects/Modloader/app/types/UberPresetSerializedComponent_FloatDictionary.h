#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_FloatDictionary__Class.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_FloatDictionary.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_FloatDictionary {
        inline app::UberPresetSerializedComponent_FloatDictionary__Class** type_info = (app::UberPresetSerializedComponent_FloatDictionary__Class**)(modloader::win::memory::resolve_rva(0x0472EE00));
        inline app::UberPresetSerializedComponent_FloatDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_FloatDictionary__Class>(type_info, "", "UberPresetSerializedComponent", "FloatDictionary");
        }
        inline app::UberPresetSerializedComponent_FloatDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_FloatDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_FloatDictionary
} // namespace app::classes::types
