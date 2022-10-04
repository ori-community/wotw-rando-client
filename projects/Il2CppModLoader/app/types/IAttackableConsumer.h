#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IAttackableConsumer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IAttackableConsumer__Class** type_info;
        inline app::IAttackableConsumer__Class* get_class() {
            return il2cpp::get_class<app::IAttackableConsumer__Class>(type_info, "Game", "IAttackableConsumer");
        }
        inline app::IAttackableConsumer* create() {
            return il2cpp::create_object<app::IAttackableConsumer>(get_class());
        }
    } // namespace IAttackableConsumer
} // namespace app::classes::types
