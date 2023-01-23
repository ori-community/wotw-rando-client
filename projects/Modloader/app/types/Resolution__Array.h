#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Resolution__Array__Class.h>
#include <Modloader/app/structs/Resolution__Array.h>

namespace app::classes::types {
    namespace Resolution__Array {
        namespace {
            inline app::Resolution__Array__Class* type_info_ref = nullptr;
        }
        inline app::Resolution__Array__Class** type_info = &type_info_ref;
        inline app::Resolution__Array__Class* get_class() {
            return il2cpp::get_class<app::Resolution__Array__Class>(type_info, "UnityEngine", "Resolution[]");
        }
        inline app::Resolution__Array* create() {
            return il2cpp::create_object<app::Resolution__Array>(get_class());
        }
    } // namespace Resolution__Array
} // namespace app::classes::types
