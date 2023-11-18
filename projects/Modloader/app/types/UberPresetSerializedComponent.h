#pragma once
#include <Modloader/app/structs/UberPresetSerializedComponent.h>
#include <Modloader/app/structs/UberPresetSerializedComponent__Array.h>
#include <Modloader/app/structs/UberPresetSerializedComponent__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace UberPresetSerializedComponent {
        inline app::UberPresetSerializedComponent__Class** type_info() {
            static app::UberPresetSerializedComponent__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::UberPresetSerializedComponent__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::UberPresetSerializedComponent__Class* get_class() {
            return il2cpp::get_class<app::UberPresetSerializedComponent__Class>(type_info(), "", "UberPresetSerializedComponent");
        }
        inline app::UberPresetSerializedComponent* create() {
            return il2cpp::create_object<app::UberPresetSerializedComponent>(get_class());
        }
        inline app::UberPresetSerializedComponent__Array* create_array(int size) {
            return il2cpp::array_new<app::UberPresetSerializedComponent__Array>(get_class(), size);
        }
        inline app::UberPresetSerializedComponent__Array* create_array(const std::vector<app::UberPresetSerializedComponent*>& items) {
            return il2cpp::array_new<app::UberPresetSerializedComponent__Array>(get_class(), items);
        }
    } // namespace UberPresetSerializedComponent
} // namespace app::classes::types
