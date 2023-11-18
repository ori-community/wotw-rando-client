#pragma once
#include <Modloader/app/structs/DamageReceiver_c.h>
#include <Modloader/app/structs/DamageReceiver_c__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiver_c {
        inline app::DamageReceiver_c__Class** type_info() {
            static app::DamageReceiver_c__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageReceiver_c__Class**)(modloader::win::memory::resolve_rva(0x04736F30));
            }
            return cache;
        }
        inline app::DamageReceiver_c__Class* get_class() {
            return il2cpp::get_nested_class<app::DamageReceiver_c__Class>(type_info(), "Moon", "DamageReceiver", "<>c");
        }
        inline app::DamageReceiver_c* create() {
            return il2cpp::create_object<app::DamageReceiver_c>(get_class());
        }
    } // namespace DamageReceiver_c
} // namespace app::classes::types
