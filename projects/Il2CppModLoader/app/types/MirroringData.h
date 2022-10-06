#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MirroringData {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MirroringData__Class** type_info;
        inline app::MirroringData__Class* get_class() {
            return il2cpp::get_class<app::MirroringData__Class>(type_info, "", "MirroringData");
        }
        inline app::MirroringData* create() {
            return il2cpp::create_object<app::MirroringData>(get_class());
        }
        inline app::MirroringData__Array* create_array(int size) {
            return il2cpp::array_new<app::MirroringData__Array>(get_class(), size);
        }
        inline app::MirroringData__Array* create_array(const std::vector<app::MirroringData*>& items) {
            return il2cpp::array_new<app::MirroringData__Array>(get_class(), items);
        }
    } // namespace MirroringData
} // namespace app::classes::types
