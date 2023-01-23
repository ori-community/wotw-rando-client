#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinStatusAnimatorDriver__Class.h>
#include <Modloader/app/structs/SeinStatusAnimatorDriver.h>

namespace app::classes::types {
    namespace SeinStatusAnimatorDriver {
        namespace {
            inline app::SeinStatusAnimatorDriver__Class* type_info_ref = nullptr;
        }
        inline app::SeinStatusAnimatorDriver__Class** type_info = &type_info_ref;
        inline app::SeinStatusAnimatorDriver__Class* get_class() {
            return il2cpp::get_class<app::SeinStatusAnimatorDriver__Class>(type_info, "", "SeinStatusAnimatorDriver");
        }
        inline app::SeinStatusAnimatorDriver* create() {
            return il2cpp::create_object<app::SeinStatusAnimatorDriver>(get_class());
        }
    } // namespace SeinStatusAnimatorDriver
} // namespace app::classes::types
