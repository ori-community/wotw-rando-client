#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ReadOnlyCollectionBase {
        namespace {
            inline app::ReadOnlyCollectionBase__Class* type_info_ref = nullptr;
        }
        inline app::ReadOnlyCollectionBase__Class** type_info = &type_info_ref;
        inline app::ReadOnlyCollectionBase__Class* get_class() {
            return il2cpp::get_class<app::ReadOnlyCollectionBase__Class>(type_info, "System.Collections", "ReadOnlyCollectionBase");
        }
        inline app::ReadOnlyCollectionBase* create() {
            return il2cpp::create_object<app::ReadOnlyCollectionBase>(get_class());
        }
    } // namespace ReadOnlyCollectionBase
} // namespace app::classes::types
