#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace fsObjectProcessor {
        extern IL2CPP_MODLOADER_DLLEXPORT app::fsObjectProcessor__Class** type_info;
        inline app::fsObjectProcessor__Class* get_class() {
            return il2cpp::get_class<app::fsObjectProcessor__Class>(type_info, "FullSerializer", "fsObjectProcessor");
        }
        inline app::fsObjectProcessor* create() {
            return il2cpp::create_object<app::fsObjectProcessor>(get_class());
        }
        inline app::fsObjectProcessor__Array* create_array(int size) {
            return il2cpp::array_new<app::fsObjectProcessor__Array>(get_class(), size);
        }
        inline app::fsObjectProcessor__Array* create_array(const std::vector<app::fsObjectProcessor*>& items) {
            return il2cpp::array_new<app::fsObjectProcessor__Array>(get_class(), items);
        }
    } // namespace fsObjectProcessor
} // namespace app::classes::types
