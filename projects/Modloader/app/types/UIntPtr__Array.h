#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UIntPtr__Array__Class.h>
#include <Modloader/app/structs/UIntPtr__Array.h>

namespace app::classes::types {
    namespace UIntPtr__Array {
        namespace {
            inline app::UIntPtr__Array__Class* type_info_ref = nullptr;
        }
        inline app::UIntPtr__Array__Class** type_info = &type_info_ref;
        inline app::UIntPtr__Array__Class* get_class() {
            return il2cpp::get_class<app::UIntPtr__Array__Class>(type_info, "System", "UIntPtr[]");
        }
        inline app::UIntPtr__Array* create() {
            return il2cpp::create_object<app::UIntPtr__Array>(get_class());
        }
    } // namespace UIntPtr__Array
} // namespace app::classes::types
