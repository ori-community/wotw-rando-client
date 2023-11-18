#pragma once
#include <Modloader/app/structs/WorldProgression__Enum.h>
#include <Modloader/app/structs/WorldProgression__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace WorldProgression__Enum {
        inline app::WorldProgression__Enum__Class** type_info() {
            static app::WorldProgression__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::WorldProgression__Enum__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::WorldProgression__Enum__Class* get_class() {
            return il2cpp::get_class<app::WorldProgression__Enum__Class>(type_info(), "", "WorldProgression");
        }
        inline app::WorldProgression__Enum* create() {
            return il2cpp::create_object<app::WorldProgression__Enum>(get_class());
        }
    } // namespace WorldProgression__Enum
} // namespace app::classes::types
