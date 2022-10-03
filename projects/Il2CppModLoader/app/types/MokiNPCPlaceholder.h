#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MokiNPCPlaceholder {
        namespace {
            app::MokiNPCPlaceholder__Class* type_info_ref = nullptr;
        }
        app::MokiNPCPlaceholder__Class** type_info = &type_info_ref;
        inline app::MokiNPCPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MokiNPCPlaceholder__Class>(type_info, "", "MokiNPCPlaceholder");
        }
        inline app::MokiNPCPlaceholder* create() {
            return il2cpp::create_object<app::MokiNPCPlaceholder>(get_class());
        }
    } // namespace MokiNPCPlaceholder
} // namespace app::classes::types
