#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IEntityOwned__Array {
        namespace {
            inline app::IEntityOwned__Array__Class* type_info_ref = nullptr;
        }
        inline app::IEntityOwned__Array__Class** type_info = &type_info_ref;
        inline app::IEntityOwned__Array__Class* get_class() {
            return il2cpp::get_class<app::IEntityOwned__Array__Class>(type_info, "Moon", "IEntityOwned[]");
        }
        inline app::IEntityOwned__Array* create() {
            return il2cpp::create_object<app::IEntityOwned__Array>(get_class());
        }
    } // namespace IEntityOwned__Array
} // namespace app::classes::types
