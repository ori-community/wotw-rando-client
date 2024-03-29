#pragma once
#include <Modloader/app/structs/Water3UnderwaterEffect.h>
#include <Modloader/app/structs/Water3UnderwaterEffect__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace Water3UnderwaterEffect {
        inline app::Water3UnderwaterEffect__Class** type_info() {
            static app::Water3UnderwaterEffect__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::Water3UnderwaterEffect__Class**)(modloader::win::memory::resolve_rva(0x04777708));
            }
            return cache;
        }
        inline app::Water3UnderwaterEffect__Class* get_class() {
            return il2cpp::get_class<app::Water3UnderwaterEffect__Class>(type_info(), "", "Water3UnderwaterEffect");
        }
        inline app::Water3UnderwaterEffect* create() {
            return il2cpp::create_object<app::Water3UnderwaterEffect>(get_class());
        }
    } // namespace Water3UnderwaterEffect
} // namespace app::classes::types
