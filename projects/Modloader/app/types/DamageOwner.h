#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DamageOwner__Class.h>
#include <Modloader/app/structs/DamageOwner.h>
#include <Modloader/app/structs/DamageOwner__Array.h>

namespace app::classes::types {
    namespace DamageOwner {
        inline app::DamageOwner__Class** type_info = (app::DamageOwner__Class**)(modloader::win::memory::resolve_rva(0x04766F28));
        inline app::DamageOwner__Class* get_class() {
            return il2cpp::get_class<app::DamageOwner__Class>(type_info, "Moon", "DamageOwner");
        }
        inline app::DamageOwner* create() {
            return il2cpp::create_object<app::DamageOwner>(get_class());
        }
        inline app::DamageOwner__Array* create_array(int size) {
            return il2cpp::array_new<app::DamageOwner__Array>(get_class(), size);
        }
        inline app::DamageOwner__Array* create_array(const std::vector<app::DamageOwner*>& items) {
            return il2cpp::array_new<app::DamageOwner__Array>(get_class(), items);
        }
    } // namespace DamageOwner
} // namespace app::classes::types
