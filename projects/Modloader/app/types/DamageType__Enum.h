#pragma once
#include <Modloader/app/structs/DamageType__Enum.h>
#include <Modloader/app/structs/DamageType__Enum__Array.h>
#include <Modloader/app/structs/DamageType__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace DamageType__Enum {
        inline app::DamageType__Enum__Class** type_info() {
            static app::DamageType__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::DamageType__Enum__Class**)(modloader::win::memory::resolve_rva(0x04753450));
            }
            return cache;
        }
        inline app::DamageType__Enum__Class* get_class() {
            return il2cpp::get_class<app::DamageType__Enum__Class>(type_info(), "", "DamageType");
        }
        inline app::DamageType__Enum* create() {
            return il2cpp::create_object<app::DamageType__Enum>(get_class());
        }
        inline app::DamageType__Enum__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageType__Enum__Array>(get_class(), size);
        }
        inline app::DamageType__Enum__Array* create_array(const std::vector<app::DamageType__Enum*>& items) {
            return il2cpp::array_new<app::DamageType__Enum__Array>(get_class(), items);
        }
    } // namespace DamageType__Enum
} // namespace app::classes::types
