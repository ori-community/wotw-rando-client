#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>
#include <Il2CppModLoader/windows_api/memory.h>

namespace app::classes::types {
    namespace PointerUIMesh {
        namespace {
            inline app::PointerUIMesh__Class* type_info_ref = nullptr;
        }
        inline app::PointerUIMesh__Class** type_info = &type_info_ref;
        inline app::PointerUIMesh__Class* get_class() {
            return il2cpp::get_class<app::PointerUIMesh__Class>(type_info, "ZenFulcrum.EmbeddedBrowser", "PointerUIMesh");
        }
        inline app::PointerUIMesh* create() {
            return il2cpp::create_object<app::PointerUIMesh>(get_class());
        }
    } // namespace PointerUIMesh
} // namespace app::classes::types
