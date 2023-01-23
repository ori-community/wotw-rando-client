#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrabEntity_DamageTime__Class.h>
#include <Modloader/app/structs/CrabEntity_DamageTime.h>
#include <Modloader/app/structs/CrabEntity_DamageTime__Array.h>

namespace app::classes::types {
    namespace CrabEntity_DamageTime {
        inline app::CrabEntity_DamageTime__Class** type_info = (app::CrabEntity_DamageTime__Class**)(modloader::win::memory::resolve_rva(0x0478DF00));
        inline app::CrabEntity_DamageTime__Class* get_class() {
            return il2cpp::get_nested_class<app::CrabEntity_DamageTime__Class>(type_info, "", "CrabEntity", "DamageTime");
        }
        inline app::CrabEntity_DamageTime* create() {
            return il2cpp::create_object<app::CrabEntity_DamageTime>(get_class());
        }
        inline app::CrabEntity_DamageTime__Array* create_array(int size) {
            return il2cpp::array_new<app::CrabEntity_DamageTime__Array>(get_class(), size);
        }
        inline app::CrabEntity_DamageTime__Array* create_array(const std::vector<app::CrabEntity_DamageTime*>& items) {
            return il2cpp::array_new<app::CrabEntity_DamageTime__Array>(get_class(), items);
        }
    } // namespace CrabEntity_DamageTime
} // namespace app::classes::types
