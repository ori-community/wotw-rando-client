#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinFall__Class.h>
#include <Modloader/app/structs/SeinFall.h>

namespace app::classes::types {
    namespace SeinFall {
        namespace {
            inline app::SeinFall__Class* type_info_ref = nullptr;
        }
        inline app::SeinFall__Class** type_info = &type_info_ref;
        inline app::SeinFall__Class* get_class() {
            return il2cpp::get_class<app::SeinFall__Class>(type_info, "", "SeinFall");
        }
        inline app::SeinFall* create() {
            return il2cpp::create_object<app::SeinFall>(get_class());
        }
    } // namespace SeinFall
} // namespace app::classes::types
