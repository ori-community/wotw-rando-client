#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EPersonaChange__Enum__Class.h>
#include <Modloader/app/structs/EPersonaChange__Enum.h>

namespace app::classes::types {
    namespace EPersonaChange__Enum {
        namespace {
            inline app::EPersonaChange__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EPersonaChange__Enum__Class** type_info = &type_info_ref;
        inline app::EPersonaChange__Enum__Class* get_class() {
            return il2cpp::get_class<app::EPersonaChange__Enum__Class>(type_info, "Steamworks", "EPersonaChange");
        }
        inline app::EPersonaChange__Enum* create() {
            return il2cpp::create_object<app::EPersonaChange__Enum>(get_class());
        }
    } // namespace EPersonaChange__Enum
} // namespace app::classes::types
