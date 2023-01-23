#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CollectionBase__Class.h>
#include <Modloader/app/structs/CollectionBase.h>

namespace app::classes::types {
    namespace CollectionBase {
        namespace {
            inline app::CollectionBase__Class* type_info_ref = nullptr;
        }
        inline app::CollectionBase__Class** type_info = &type_info_ref;
        inline app::CollectionBase__Class* get_class() {
            return il2cpp::get_class<app::CollectionBase__Class>(type_info, "System.Collections", "CollectionBase");
        }
        inline app::CollectionBase* create() {
            return il2cpp::create_object<app::CollectionBase>(get_class());
        }
    } // namespace CollectionBase
} // namespace app::classes::types
