#pragma once
#include <Modloader/app/structs/MoonGetAbilityPedestal.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal__Array.h>
#include <Modloader/app/structs/MoonGetAbilityPedestal__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace MoonGetAbilityPedestal {
        inline app::MoonGetAbilityPedestal__Class** type_info() {
            static app::MoonGetAbilityPedestal__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::MoonGetAbilityPedestal__Class**)(modloader::win::memory::resolve_rva(0x04741460));
            }
            return cache;
        }
        inline app::MoonGetAbilityPedestal__Class* get_class() {
            return il2cpp::get_class<app::MoonGetAbilityPedestal__Class>(type_info(), "", "MoonGetAbilityPedestal");
        }
        inline app::MoonGetAbilityPedestal* create() {
            return il2cpp::create_object<app::MoonGetAbilityPedestal>(get_class());
        }
        inline app::MoonGetAbilityPedestal__Array* create_array(int size) {
            return il2cpp::array_new<app::MoonGetAbilityPedestal__Array>(get_class(), size);
        }
        inline app::MoonGetAbilityPedestal__Array* create_array(const std::vector<app::MoonGetAbilityPedestal*>& items) {
            return il2cpp::array_new<app::MoonGetAbilityPedestal__Array>(get_class(), items);
        }
    } // namespace MoonGetAbilityPedestal
} // namespace app::classes::types
