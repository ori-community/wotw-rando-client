#pragma once
#include <Modloader/app/structs/SeinDigging_DiggingEffects__Array.h>
#include <Modloader/app/structs/SeinDigging_DiggingEffects__Array__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDigging_DiggingEffects__Array {
        inline app::SeinDigging_DiggingEffects__Array__Class** type_info() {
            static app::SeinDigging_DiggingEffects__Array__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDigging_DiggingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04777540));
            }
            return cache;
        }
        inline app::SeinDigging_DiggingEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinDigging_DiggingEffects__Array__Class>(type_info(), "", "SeinDigging+DiggingEffects[]");
        }
        inline app::SeinDigging_DiggingEffects__Array* create() {
            return il2cpp::create_object<app::SeinDigging_DiggingEffects__Array>(get_class());
        }
    } // namespace SeinDigging_DiggingEffects__Array
} // namespace app::classes::types
