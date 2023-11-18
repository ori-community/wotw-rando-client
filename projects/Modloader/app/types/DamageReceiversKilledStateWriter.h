#pragma once
#include <Modloader/app/structs/DamageReceiversKilledStateWriter.h>
#include <Modloader/app/structs/DamageReceiversKilledStateWriter__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageReceiversKilledStateWriter {
        inline app::DamageReceiversKilledStateWriter__Class** type_info() {
            static app::DamageReceiversKilledStateWriter__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::DamageReceiversKilledStateWriter__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::DamageReceiversKilledStateWriter__Class* get_class() {
            return il2cpp::get_class<app::DamageReceiversKilledStateWriter__Class>(type_info(), "", "DamageReceiversKilledStateWriter");
        }
        inline app::DamageReceiversKilledStateWriter* create() {
            return il2cpp::create_object<app::DamageReceiversKilledStateWriter>(get_class());
        }
    } // namespace DamageReceiversKilledStateWriter
} // namespace app::classes::types
