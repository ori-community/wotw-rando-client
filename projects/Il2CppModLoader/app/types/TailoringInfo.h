#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace TailoringInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::TailoringInfo__Class** type_info;
        inline app::TailoringInfo__Class* get_class() {
            return il2cpp::get_class<app::TailoringInfo__Class>(type_info, "Mono.Globalization.Unicode", "TailoringInfo");
        }
        inline app::TailoringInfo* create() {
            return il2cpp::create_object<app::TailoringInfo>(get_class());
        }
        inline app::TailoringInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::TailoringInfo__Array>(get_class(), size);
        }
        inline app::TailoringInfo__Array* create_array(const std::vector<app::TailoringInfo*>& items) {
            return il2cpp::array_new<app::TailoringInfo__Array>(get_class(), items);
        }
    } // namespace TailoringInfo
} // namespace app::classes::types
