#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ReviewStatus__Enum__Class.h>
#include <Modloader/app/structs/ReviewStatus__Enum.h>

namespace app::classes::types {
    namespace ReviewStatus__Enum {
        namespace {
            inline app::ReviewStatus__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ReviewStatus__Enum__Class** type_info = &type_info_ref;
        inline app::ReviewStatus__Enum__Class* get_class() {
            return il2cpp::get_class<app::ReviewStatus__Enum__Class>(type_info, "Moon.ReviewFramework", "ReviewStatus");
        }
        inline app::ReviewStatus__Enum* create() {
            return il2cpp::create_object<app::ReviewStatus__Enum>(get_class());
        }
    } // namespace ReviewStatus__Enum
} // namespace app::classes::types
