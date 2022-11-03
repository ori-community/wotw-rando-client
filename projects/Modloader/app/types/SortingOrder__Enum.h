#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SortingOrder__Enum {
        namespace {
            inline app::SortingOrder__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SortingOrder__Enum__Class** type_info = &type_info_ref;
        inline app::SortingOrder__Enum__Class* get_class() {
            return il2cpp::get_class<app::SortingOrder__Enum__Class>(type_info, "SystemIntegration", "SortingOrder");
        }
        inline app::SortingOrder__Enum* create() {
            return il2cpp::create_object<app::SortingOrder__Enum>(get_class());
        }
    } // namespace SortingOrder__Enum
} // namespace app::classes::types
