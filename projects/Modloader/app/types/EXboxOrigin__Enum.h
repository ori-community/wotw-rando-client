#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EXboxOrigin__Enum__Class.h>
#include <Modloader/app/structs/EXboxOrigin__Enum.h>

namespace app::classes::types {
    namespace EXboxOrigin__Enum {
        namespace {
            inline app::EXboxOrigin__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EXboxOrigin__Enum__Class** type_info = &type_info_ref;
        inline app::EXboxOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::EXboxOrigin__Enum__Class>(type_info, "Steamworks", "EXboxOrigin");
        }
        inline app::EXboxOrigin__Enum* create() {
            return il2cpp::create_object<app::EXboxOrigin__Enum>(get_class());
        }
    } // namespace EXboxOrigin__Enum
} // namespace app::classes::types
