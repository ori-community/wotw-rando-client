#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent__Array.h>
#include <Modloader/app/structs/UberPresetSerializedComponent__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent__Array {
        inline app::UberPresetSerializedComponent__Array__Class** type_info() {
            static app::UberPresetSerializedComponent__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPresetSerializedComponent__Array__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent__Array__Class* get_class() {
            return il2cpp::get_class<app::UberPresetSerializedComponent__Array__Class>(type_info(), "", "UberPresetSerializedComponent[]");
        }
        inline app::UberPresetSerializedComponent__Array* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent__Array>(get_class());
        }
    } // namespace UberPresetSerializedComponent__Array
} // namespace app::classes::types
