#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NativeArrayOptions__Enum__Class.h>
#include <Modloader/app/structs/NativeArrayOptions__Enum.h>

namespace app::classes::types {
    namespace NativeArrayOptions__Enum {
        namespace {
            inline app::NativeArrayOptions__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NativeArrayOptions__Enum__Class** type_info = &type_info_ref;
        inline app::NativeArrayOptions__Enum__Class* get_class() {
            return il2cpp::get_class<app::NativeArrayOptions__Enum__Class>(type_info, "Unity.Collections", "NativeArrayOptions");
        }
        inline app::NativeArrayOptions__Enum* create() {
            return il2cpp::create_object<app::NativeArrayOptions__Enum>(get_class());
        }
    } // namespace NativeArrayOptions__Enum
} // namespace app::classes::types
