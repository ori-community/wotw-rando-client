#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace MaterialVFXSizePair {
        inline app::MaterialVFXSizePair__Class** type_info = (app::MaterialVFXSizePair__Class**)(modloader::win::memory::resolve_rva(0x04760370));
        inline app::MaterialVFXSizePair__Class* get_class() {
            return il2cpp::get_class<app::MaterialVFXSizePair__Class>(type_info, "", "MaterialVFXSizePair");
        }
        inline app::MaterialVFXSizePair* create() {
            return il2cpp::create_object<app::MaterialVFXSizePair>(get_class());
        }
        inline app::MaterialVFXSizePair__Array* create_array(int size) {
            return il2cpp::array_new<app::MaterialVFXSizePair__Array>(get_class(), size);
        }
        inline app::MaterialVFXSizePair__Array* create_array(const std::vector<app::MaterialVFXSizePair*>& items) {
            return il2cpp::array_new<app::MaterialVFXSizePair__Array>(get_class(), items);
        }
    } // namespace MaterialVFXSizePair
} // namespace app::classes::types
