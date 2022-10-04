#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ITurbulenceInfluencer {
        extern IL2CPP_MODLOADER_DLLEXPORT app::ITurbulenceInfluencer__Class** type_info;
        inline app::ITurbulenceInfluencer__Class* get_class() {
            return il2cpp::get_class<app::ITurbulenceInfluencer__Class>(type_info, "", "ITurbulenceInfluencer");
        }
        inline app::ITurbulenceInfluencer__Array* create_array(int size) {
            return il2cpp::array_new<app::ITurbulenceInfluencer__Array>(get_class(), size);
        }
    } // namespace ITurbulenceInfluencer
} // namespace app::classes::types
