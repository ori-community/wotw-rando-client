#pragma once
#include <Modloader/app/structs/SeinDamageReceiverPuppet.h>
#include <Modloader/app/structs/SeinDamageReceiverPuppet__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinDamageReceiverPuppet {
        inline app::SeinDamageReceiverPuppet__Class** type_info() {
            static app::SeinDamageReceiverPuppet__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinDamageReceiverPuppet__Class**)(modloader::win::memory::resolve_rva(0x04782DA0));
            }
            return cache;
        }
        inline app::SeinDamageReceiverPuppet__Class* get_class() {
            return il2cpp::get_class<app::SeinDamageReceiverPuppet__Class>(type_info(), "", "SeinDamageReceiverPuppet");
        }
        inline app::SeinDamageReceiverPuppet* create() {
            return il2cpp::create_object<app::SeinDamageReceiverPuppet>(get_class());
        }
    } // namespace SeinDamageReceiverPuppet
} // namespace app::classes::types
