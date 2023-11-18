#pragma once
#include <Modloader/app/structs/IAttackableConsumer.h>
#include <Modloader/app/structs/IAttackableConsumer__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IAttackableConsumer {
        inline app::IAttackableConsumer__Class** type_info() {
            static app::IAttackableConsumer__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IAttackableConsumer__Class**)(modloader::win::memory::resolve_rva(0x047616B8));
            }
            return cache;
        }
        inline app::IAttackableConsumer__Class* get_class() {
            return il2cpp::get_class<app::IAttackableConsumer__Class>(type_info(), "Game", "IAttackableConsumer");
        }
    } // namespace IAttackableConsumer
} // namespace app::classes::types
