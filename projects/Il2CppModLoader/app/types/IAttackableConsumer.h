#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace IAttackableConsumer {
        inline app::IAttackableConsumer__Class** type_info = (app::IAttackableConsumer__Class**)(modloader::win::memory::resolve_rva(0x047616B8));
        inline app::IAttackableConsumer__Class* get_class() {
            return il2cpp::get_class<app::IAttackableConsumer__Class>(type_info, "Game", "IAttackableConsumer");
        }
    } // namespace IAttackableConsumer
} // namespace app::classes::types
