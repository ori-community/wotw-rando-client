#pragma once
#include <Modloader/app/structs/SpecialAbilityZone.h>
#include <Modloader/app/structs/SpecialAbilityZone__Array.h>
#include <Modloader/app/structs/SpecialAbilityZone__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SpecialAbilityZone {
        inline app::SpecialAbilityZone__Class** type_info() {
            static app::SpecialAbilityZone__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SpecialAbilityZone__Class**)(modloader::win::memory::resolve_rva(0x04759A78));
            }
            return cache;
        }
        inline app::SpecialAbilityZone__Class* get_class() {
            return il2cpp::get_class<app::SpecialAbilityZone__Class>(type_info(), "", "SpecialAbilityZone");
        }
        inline app::SpecialAbilityZone* create() {
            return il2cpp::create_object<app::SpecialAbilityZone>(get_class());
        }
        inline app::SpecialAbilityZone__Array* create_array(int size) {
            return il2cpp::array_new<app::SpecialAbilityZone__Array>(get_class(), size);
        }
        inline app::SpecialAbilityZone__Array* create_array(const std::vector<app::SpecialAbilityZone*>& items) {
            return il2cpp::array_new<app::SpecialAbilityZone__Array>(get_class(), items);
        }
    } // namespace SpecialAbilityZone
} // namespace app::classes::types
