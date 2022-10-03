#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace MothSwarmPlaceholder {
        namespace {
            app::MothSwarmPlaceholder__Class* type_info_ref = nullptr;
        }
        app::MothSwarmPlaceholder__Class** type_info = &type_info_ref;
        inline app::MothSwarmPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MothSwarmPlaceholder__Class>(type_info, "", "MothSwarmPlaceholder");
        }
        inline app::MothSwarmPlaceholder* create() {
            return il2cpp::create_object<app::MothSwarmPlaceholder>(get_class());
        }
    } // namespace MothSwarmPlaceholder
} // namespace app::classes::types
