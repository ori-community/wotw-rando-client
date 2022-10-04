#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAttackableConsumer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAttackableConsumer__Class** type_info;
        inline app::IAttackableConsumer__Class* get_class() {
            return il2cpp::get_class<app::IAttackableConsumer__Class>(type_info, "Game", "IAttackableConsumer");
        }
    } // namespace IAttackableConsumer
} // namespace app::classes::types
