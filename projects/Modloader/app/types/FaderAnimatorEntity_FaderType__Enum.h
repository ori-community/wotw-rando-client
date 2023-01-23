#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FaderAnimatorEntity_FaderType__Enum__Class.h>
#include <Modloader/app/structs/FaderAnimatorEntity_FaderType__Enum.h>

namespace app::classes::types {
    namespace FaderAnimatorEntity_FaderType__Enum {
        namespace {
            inline app::FaderAnimatorEntity_FaderType__Enum__Class* type_info_ref = nullptr;
        }
        inline app::FaderAnimatorEntity_FaderType__Enum__Class** type_info = &type_info_ref;
        inline app::FaderAnimatorEntity_FaderType__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::FaderAnimatorEntity_FaderType__Enum__Class>(type_info, "Moon.Timeline", "FaderAnimatorEntity", "FaderType");
        }
        inline app::FaderAnimatorEntity_FaderType__Enum* create() {
            return il2cpp::create_object<app::FaderAnimatorEntity_FaderType__Enum>(get_class());
        }
    } // namespace FaderAnimatorEntity_FaderType__Enum
} // namespace app::classes::types
