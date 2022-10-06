#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace CommandBinding {
        extern IL2CPP_MODLOADER_DLLEXPORT app::CommandBinding__Class** type_info;
        inline app::CommandBinding__Class* get_class() {
            return il2cpp::get_class<app::CommandBinding__Class>(type_info, "", "CommandBinding");
        }
        inline app::CommandBinding* create() {
            return il2cpp::create_object<app::CommandBinding>(get_class());
        }
        inline app::CommandBinding__Array* create_array(int size) {
            return il2cpp::array_new<app::CommandBinding__Array>(get_class(), size);
        }
        inline app::CommandBinding__Array* create_array(const std::vector<app::CommandBinding*>& items) {
            return il2cpp::array_new<app::CommandBinding__Array>(get_class(), items);
        }
    } // namespace CommandBinding
} // namespace app::classes::types
