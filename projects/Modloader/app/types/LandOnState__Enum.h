#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/LandOnState__Enum__Class.h>
#include <Modloader/app/structs/LandOnState__Enum.h>

namespace app::classes::types {
    namespace LandOnState__Enum {
        namespace {
            inline app::LandOnState__Enum__Class* type_info_ref = nullptr;
        }
        inline app::LandOnState__Enum__Class** type_info = &type_info_ref;
        inline app::LandOnState__Enum__Class* get_class() {
            return il2cpp::get_class<app::LandOnState__Enum__Class>(type_info, "", "LandOnState");
        }
        inline app::LandOnState__Enum* create() {
            return il2cpp::create_object<app::LandOnState__Enum>(get_class());
        }
    } // namespace LandOnState__Enum
} // namespace app::classes::types
