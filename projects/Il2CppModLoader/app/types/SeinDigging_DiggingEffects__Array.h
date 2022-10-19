#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace SeinDigging_DiggingEffects__Array {
        inline app::SeinDigging_DiggingEffects__Array__Class** type_info = (app::SeinDigging_DiggingEffects__Array__Class**)(modloader::win::memory::resolve_rva(0x04777540));
        inline app::SeinDigging_DiggingEffects__Array__Class* get_class() {
            return il2cpp::get_class<app::SeinDigging_DiggingEffects__Array__Class>(type_info, "", "SeinDigging+DiggingEffects[]");
        }
        inline app::SeinDigging_DiggingEffects__Array* create() {
            return il2cpp::create_object<app::SeinDigging_DiggingEffects__Array>(get_class());
        }
    } // namespace SeinDigging_DiggingEffects__Array
} // namespace app::classes::types
