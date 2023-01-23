#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/PInfo__Enum__Class.h>
#include <Modloader/app/structs/PInfo__Enum.h>

namespace app::classes::types {
    namespace PInfo__Enum {
        namespace {
            inline app::PInfo__Enum__Class* type_info_ref = nullptr;
        }
        inline app::PInfo__Enum__Class** type_info = &type_info_ref;
        inline app::PInfo__Enum__Class* get_class() {
            return il2cpp::get_class<app::PInfo__Enum__Class>(type_info, "System.Reflection", "PInfo");
        }
        inline app::PInfo__Enum* create() {
            return il2cpp::create_object<app::PInfo__Enum>(get_class());
        }
    } // namespace PInfo__Enum
} // namespace app::classes::types
