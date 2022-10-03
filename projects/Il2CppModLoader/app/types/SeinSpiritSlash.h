#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SeinSpiritSlash {
        namespace {
            app::SeinSpiritSlash__Class* type_info_ref = nullptr;
        }
        app::SeinSpiritSlash__Class** type_info = &type_info_ref;
        inline app::SeinSpiritSlash__Class* get_class() {
            return il2cpp::get_class<app::SeinSpiritSlash__Class>(type_info, "", "SeinSpiritSlash");
        }
        inline app::SeinSpiritSlash* create() {
            return il2cpp::create_object<app::SeinSpiritSlash>(get_class());
        }
    } // namespace SeinSpiritSlash
} // namespace app::classes::types
