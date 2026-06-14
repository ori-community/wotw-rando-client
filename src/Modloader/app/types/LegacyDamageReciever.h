#pragma once
#include <Modloader/app/structs/LegacyDamageReciever.h>
#include <Modloader/app/structs/LegacyDamageReciever__Array.h>
#include <Modloader/app/structs/LegacyDamageReciever__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyDamageReciever {
        inline app::LegacyDamageReciever__Class** type_info() {
            static app::LegacyDamageReciever__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyDamageReciever__Class**)(modloader::win::memory::resolve_rva(0x04797378));
            }
            return cache;
        }
        inline app::LegacyDamageReciever__Class* get_class() {
            return il2cpp::get_class<app::LegacyDamageReciever__Class>(type_info(), "", "LegacyDamageReciever");
        }
        inline app::LegacyDamageReciever* create() {
            return il2cpp::create_object<app::LegacyDamageReciever>(get_class());
        }
        inline app::LegacyDamageReciever__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyDamageReciever__Array>(get_class(), size);
        }
        inline app::LegacyDamageReciever__Array* create_array(const std::vector<app::LegacyDamageReciever*>& items) {
            return il2cpp::array_new<app::LegacyDamageReciever__Array>(get_class(), items);
        }
    } // namespace LegacyDamageReciever
} // namespace app::classes::types
