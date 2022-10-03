#pragma once
#include <Il2CppModLoader/il2cpp_helpers.h>
#include <Il2CppModLoader/macros.h>

namespace app::classes::types {
    namespace ReadOnlyCollectionBase {
        namespace {
            app::ReadOnlyCollectionBase__Class* type_info_ref = nullptr;
        }
        app::ReadOnlyCollectionBase__Class** type_info = &type_info_ref;
        inline app::ReadOnlyCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyCollectionBase__Class>(type_info, "System.Collections", "ReadOnlyCollectionBase");
        }
        inline app::ReadOnlyCollectionBase* create() {
            return il2cpp::create_object<app::ReadOnlyCollectionBase>(get_class());
        }
    } // namespace ReadOnlyCollectionBase
} // namespace app::classes::types
