#pragma once
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Array.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Boxed.h>
#include <Modloader/app/structs/SeinSpiritSpearSpell_FlyingSpear__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSpearSpell_FlyingSpear {
        inline app::SeinSpiritSpearSpell_FlyingSpear__Class** type_info() {
            static app::SeinSpiritSpearSpell_FlyingSpear__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::SeinSpiritSpearSpell_FlyingSpear__Class**)(modloader::win::memory::resolve_rva(0x047406D8));
            }
            return cache;
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Class* get_class() {
            return il2cpp::get_nested_class<app::SeinSpiritSpearSpell_FlyingSpear__Class>(type_info(), "", "SeinSpiritSpearSpell", "FlyingSpear");
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear* create() {
            return il2cpp::create_object<app::SeinSpiritSpearSpell_FlyingSpear>(get_class());
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Boxed* box(app::SeinSpiritSpearSpell_FlyingSpear value) {
            return il2cpp::box_value<app::SeinSpiritSpearSpell_FlyingSpear__Boxed>(get_class(), value);
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array* create_array(int size) {
            return il2cpp::array_new<app::SeinSpiritSpearSpell_FlyingSpear__Array>(get_class(), size);
        }
        inline app::SeinSpiritSpearSpell_FlyingSpear__Array* create_array(const std::vector<app::SeinSpiritSpearSpell_FlyingSpear>& items) {
            return il2cpp::array_new<app::SeinSpiritSpearSpell_FlyingSpear__Array>(get_class(), items);
        }
    } // namespace SeinSpiritSpearSpell_FlyingSpear
} // namespace app::classes::types
