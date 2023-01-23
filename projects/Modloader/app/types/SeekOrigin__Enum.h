#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeekOrigin__Enum__Class.h>
#include <Modloader/app/structs/SeekOrigin__Enum.h>

namespace app::classes::types {
    namespace SeekOrigin__Enum {
        namespace {
            inline app::SeekOrigin__Enum__Class* type_info_ref = nullptr;
        }
        inline app::SeekOrigin__Enum__Class** type_info = &type_info_ref;
        inline app::SeekOrigin__Enum__Class* get_class() {
            return il2cpp::get_class<app::SeekOrigin__Enum__Class>(type_info, "System.IO", "SeekOrigin");
        }
        inline app::SeekOrigin__Enum* create() {
            return il2cpp::create_object<app::SeekOrigin__Enum>(get_class());
        }
    } // namespace SeekOrigin__Enum
} // namespace app::classes::types
