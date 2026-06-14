#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent_IntDictionary.h>
#include <Modloader/app/structs/UberPresetSerializedComponent_IntDictionary__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent_IntDictionary {
        inline app::UberPresetSerializedComponent_IntDictionary__Class** type_info() {
            static app::UberPresetSerializedComponent_IntDictionary__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::UberPresetSerializedComponent_IntDictionary__Class**)(modloader::win::memory::resolve_rva(0x04704990));
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent_IntDictionary__Class* get_class() {
            return il2cpp::get_nested_class<app::UberPresetSerializedComponent_IntDictionary__Class>(type_info(), "", "UberPresetSerializedComponent", "IntDictionary");
        }
        inline app::UberPresetSerializedComponent_IntDictionary* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent_IntDictionary>(get_class());
        }
    } // namespace UberPresetSerializedComponent_IntDictionary
} // namespace app::classes::types
