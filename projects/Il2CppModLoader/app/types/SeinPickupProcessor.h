#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinPickupProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinPickupProcessor__Class** type_info;
        inline app::SeinPickupProcessor__Class* get_class() {
            return il2cpp::get_class<app::SeinPickupProcessor__Class>(type_info, "", "SeinPickupProcessor");
        }
        inline app::SeinPickupProcessor* create() {
            return il2cpp::create_object<app::SeinPickupProcessor>(get_class());
        }
    } // namespace SeinPickupProcessor
} // namespace app::classes::types
