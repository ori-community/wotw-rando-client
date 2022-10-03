#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MurmurHash2 {
        namespace {
            app::MurmurHash2__Class* type_info_ref = nullptr;
        }
        app::MurmurHash2__Class** type_info = &type_info_ref;
        inline app::MurmurHash2__Class* get_class() {
            return il2cpp::get_class<app::MurmurHash2__Class>(type_info, "", "MurmurHash2");
        }
        inline app::MurmurHash2* create() {
            return il2cpp::create_object<app::MurmurHash2>(get_class());
        }
    } // namespace MurmurHash2
} // namespace app::classes::types
