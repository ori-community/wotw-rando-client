#pragma once
#include <Modloader/app/structs/SeinAbilityRestrictZone.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone__Array.h>
#include <Modloader/app/structs/SeinAbilityRestrictZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinAbilityRestrictZone {
        inline app::SeinAbilityRestrictZone__Class** type_info() {
            static app::SeinAbilityRestrictZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinAbilityRestrictZone__Class**)(modloader::win::memory::resolve_rva(0x04701AA8));
            }
            return cache;
        }
        inline app::SeinAbilityRestrictZone__Class* get_class() {
            return il2cpp::get_class<app::SeinAbilityRestrictZone__Class>(type_info(), "", "SeinAbilityRestrictZone");
        }
        inline app::SeinAbilityRestrictZone* create() {
            return il2cpp::create_object<app::SeinAbilityRestrictZone>(get_class());
        }
        inline app::SeinAbilityRestrictZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone__Array>(get_class(), size);
        }
        inline app::SeinAbilityRestrictZone__Array* create_array(const std::vector<app::SeinAbilityRestrictZone*>& items) {
            return il2cpp::array_new<app::SeinAbilityRestrictZone__Array>(get_class(), items);
        }
    } // namespace SeinAbilityRestrictZone
} // namespace app::classes::types
