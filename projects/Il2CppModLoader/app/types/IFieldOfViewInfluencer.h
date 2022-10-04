#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace IFieldOfViewInfluencer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::IFieldOfViewInfluencer__Class** type_info;
        inline app::IFieldOfViewInfluencer__Class* get_class() {
            return il2cpp::get_class<app::IFieldOfViewInfluencer__Class>(type_info, "", "IFieldOfViewInfluencer");
        }
        inline app::IFieldOfViewInfluencer* create() {
            return il2cpp::create_object<app::IFieldOfViewInfluencer>(get_class());
        }
        inline app::IFieldOfViewInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::IFieldOfViewInfluencer__Array>(get_class(), size);
        }
    } // namespace IFieldOfViewInfluencer
} // namespace app::classes::types
