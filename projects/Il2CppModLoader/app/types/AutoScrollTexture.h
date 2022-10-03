#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace AutoScrollTexture {
        namespace {
            app::AutoScrollTexture__Class* type_info_ref = nullptr;
        }
        app::AutoScrollTexture__Class** type_info = &type_info_ref;
        inline app::AutoScrollTexture__Class* get_class() {
            return il2cpp::get_class<app::AutoScrollTexture__Class>(type_info, "", "AutoScrollTexture");
        }
        inline app::AutoScrollTexture* create() {
            return il2cpp::create_object<app::AutoScrollTexture>(get_class());
        }
    } // namespace AutoScrollTexture
} // namespace app::classes::types
