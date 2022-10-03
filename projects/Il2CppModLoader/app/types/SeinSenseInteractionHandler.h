#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSenseInteractionHandler {
        extern IL2CPP_MODLOADER_DLLEXPORT app::SeinSenseInteractionHandler__Class** type_info;
        inline app::SeinSenseInteractionHandler__Class* get_class() {
            return il2cpp::get_class<app::SeinSenseInteractionHandler__Class>(type_info, "", "SeinSenseInteractionHandler");
        }
        inline app::SeinSenseInteractionHandler* create() {
            return il2cpp::create_object<app::SeinSenseInteractionHandler>(get_class());
        }
    } // namespace SeinSenseInteractionHandler
} // namespace app::classes::types
