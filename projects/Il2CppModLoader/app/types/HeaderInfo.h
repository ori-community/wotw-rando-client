#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace HeaderInfo {
        extern IL2CPP_MODLOADER_DLLEXPORT app::HeaderInfo__Class** type_info;
        inline app::HeaderInfo__Class* get_class() {
            return il2cpp::get_class<app::HeaderInfo__Class>(type_info, "System.Net", "HeaderInfo");
        }
        inline app::HeaderInfo* create() {
            return il2cpp::create_object<app::HeaderInfo>(get_class());
        }
        inline app::HeaderInfo__Array* create_array(int size) {
            return il2cpp::array_new<app::HeaderInfo__Array>(get_class(), size);
        }
        inline app::HeaderInfo__Array* create_array(const std::vector<app::HeaderInfo*>& items) {
            return il2cpp::array_new<app::HeaderInfo__Array>(get_class(), items);
        }
    } // namespace HeaderInfo
} // namespace app::classes::types
