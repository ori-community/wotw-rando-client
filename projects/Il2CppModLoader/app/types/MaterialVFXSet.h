#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialVFXSet {
        inline app::MaterialVFXSet__Class** type_info = (app::MaterialVFXSet__Class**)(modloader::win::memory::resolve_rva(0x047309D0));
        inline app::MaterialVFXSet__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSet__Class>(type_info, "", "MaterialVFXSet");
        }
        inline app::MaterialVFXSet* create() {
            return il2cpp::create_object<app::MaterialVFXSet>(get_class());
        }
        inline app::MaterialVFXSet__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialVFXSet__Array>(get_class(), size);
        }
        inline app::MaterialVFXSet__Array* create_array(const std::vector<app::MaterialVFXSet*>& items) {
            return il2cpp::array_new<app::MaterialVFXSet__Array>(get_class(), items);
        }
    } // namespace MaterialVFXSet
} // namespace app::classes::types
