#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_QuaternionDictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_QuaternionDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_QuaternionDictionary {
        inline app::UberPresetSerializedComponent_QuaternionDictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_QuaternionDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_QuaternionDictionary__Class**)(modloader::win::memory::resolve_rva(0x047552D0));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_QuaternionDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_QuaternionDictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "QuaternionDictionary");
        }
        inline app::UberPresetSerializedComponent_QuaternionDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_QuaternionDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_QuaternionDictionary
} // namespace app::classes::types
