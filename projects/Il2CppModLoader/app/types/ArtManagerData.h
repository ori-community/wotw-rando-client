#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ArtManagerData {
        namespace {
            app::ArtManagerData__Class* type_info_ref = nullptr;
        }
        app::ArtManagerData__Class** type_info = &type_info_ref;
        inline app::ArtManagerData__Class* get_class() {
            return il2cpp::get_class<app::ArtManagerData__Class>(type_info, "Moon", "ArtManagerData");
        }
        inline app::ArtManagerData* create() {
            return il2cpp::create_object<app::ArtManagerData>(get_class());
        }
    } // namespace ArtManagerData
} // namespace app::classes::types
