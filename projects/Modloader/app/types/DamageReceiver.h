#pragma once
#include <Modloader/app/structs/DamageReceiver.h>
#include <Modloader/app/structs/DamageReceiver__Array.h>
#include <Modloader/app/structs/DamageReceiver__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver {
        inline app::DamageReceiver__Class** type_info() {
            static app::DamageReceiver__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageReceiver__Class**)(modloader::win::memory::resolve_rva(0x04764D28));
            }
            return cache;
        }
        inline app::DamageReceiver__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiver__Class>(type_info(), "Moon", "DamageReceiver");
        }
        inline app::DamageReceiver* create() {
            return il2cpp::create_object<app::DamageReceiver>(get_class());
        }
        inline app::DamageReceiver__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageReceiver__Array>(get_class(), size);
        }
        inline app::DamageReceiver__Array* create_array(const std::vector<app::DamageReceiver*>& items) {
            return il2cpp::array_new<app::DamageReceiver__Array>(get_class(), items);
        }
    } // namespace DamageReceiver
} // namespace app::classes::types
