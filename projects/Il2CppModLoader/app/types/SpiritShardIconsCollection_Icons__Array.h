#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace SpiritShardIconsCollection_Icons__Array {
        namespace {
            app::SpiritShardIconsCollection_Icons__Array__Class* type_info_ref = nullptr;
        }
        app::SpiritShardIconsCollection_Icons__Array__Class** type_info = &type_info_ref;
        inline app::SpiritShardIconsCollection_Icons__Array__Class* get_class() {
            return il2cpp::get_class<app::SpiritShardIconsCollection_Icons__Array__Class>(type_info, "", "SpiritShardIconsCollection+Icons[]");
        }
        inline app::SpiritShardIconsCollection_Icons__Array* create() {
            return il2cpp::create_object<app::SpiritShardIconsCollection_Icons__Array>(get_class());
        }
    } // namespace SpiritShardIconsCollection_Icons__Array
} // namespace app::classes::types
