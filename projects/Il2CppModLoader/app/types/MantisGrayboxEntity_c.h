#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MantisGrayboxEntity_c {
        extern IL2CPP_MODLOADER_DLLEXPORT app::MantisGrayboxEntity_c__Class** type_info;
        inline app::MantisGrayboxEntity_c__Class* get_class() {
            return il2cpp::get_nested_class<app::MantisGrayboxEntity_c__Class>(type_info, "", "MantisGrayboxEntity", "<>c");
        }
        inline app::MantisGrayboxEntity_c* create() {
            return il2cpp::create_object<app::MantisGrayboxEntity_c>(get_class());
        }
    } // namespace MantisGrayboxEntity_c
} // namespace app::classes::types
