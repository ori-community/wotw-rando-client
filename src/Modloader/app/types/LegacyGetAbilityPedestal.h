#pragma once
#include <Modloader/app/structs/LegacyGetAbilityPedestal.h>
#include <Modloader/app/structs/LegacyGetAbilityPedestal__Array.h>
#include <Modloader/app/structs/LegacyGetAbilityPedestal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace LegacyGetAbilityPedestal {
        inline app::LegacyGetAbilityPedestal__Class** type_info() {
            static app::LegacyGetAbilityPedestal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::LegacyGetAbilityPedestal__Class**)(modloader::win::memory::resolve_rva(0x04726F20));
            }
            return cache;
        }
        inline app::LegacyGetAbilityPedestal__Class* get_class() {
            return il2cpp::get_class<app::LegacyGetAbilityPedestal__Class>(type_info(), "", "LegacyGetAbilityPedestal");
        }
        inline app::LegacyGetAbilityPedestal* create() {
            return il2cpp::create_object<app::LegacyGetAbilityPedestal>(get_class());
        }
        inline app::LegacyGetAbilityPedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::LegacyGetAbilityPedestal__Array>(get_class(), size);
        }
        inline app::LegacyGetAbilityPedestal__Array* create_array(const std::vector<app::LegacyGetAbilityPedestal*>& items) {
            return il2cpp::array_new<app::LegacyGetAbilityPedestal__Array>(get_class(), items);
        }
    } // namespace LegacyGetAbilityPedestal
} // namespace app::classes::types
