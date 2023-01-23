#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ConstraintFlag__Enum__Class.h>
#include <Modloader/app/structs/ConstraintFlag__Enum.h>

namespace app::classes::types {
    namespace ConstraintFlag__Enum {
        namespace {
            inline app::ConstraintFlag__Enum__Class* type_info_ref = nullptr;
        }
        inline app::ConstraintFlag__Enum__Class** type_info = &type_info_ref;
        inline app::ConstraintFlag__Enum__Class* get_class() {
            return il2cpp::get_class<app::ConstraintFlag__Enum__Class>(type_info, "Moon.Timeline", "ConstraintFlag");
        }
        inline app::ConstraintFlag__Enum* create() {
            return il2cpp::create_object<app::ConstraintFlag__Enum>(get_class());
        }
    } // namespace ConstraintFlag__Enum
} // namespace app::classes::types
