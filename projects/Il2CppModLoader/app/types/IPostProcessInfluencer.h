#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IPostProcessInfluencer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IPostProcessInfluencer__Class** type_info;
        inline app::IPostProcessInfluencer__Class* get_class() {
            return il2cpp::get_class<app::IPostProcessInfluencer__Class>(type_info, "", "IPostProcessInfluencer");
        }
        inline app::IPostProcessInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::IPostProcessInfluencer__Array>(get_class(), size);
        }
        inline app::IPostProcessInfluencer__Array* create_array(const std::vector<app::IPostProcessInfluencer*>& items) {
            return il2cpp::array_new<app::IPostProcessInfluencer__Array>(get_class(), items);
        }
    } // namespace IPostProcessInfluencer
} // namespace app::classes::types
