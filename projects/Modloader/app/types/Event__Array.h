#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Event__Array__Class.h>
#include <Modloader/app/structs/Event__Array.h>

namespace app::classes::types {
    namespace Event__Array {
        namespace {
            inline app::Event__Array__Class* type_info_ref = nullptr;
        }
        inline app::Event__Array__Class** type_info = &type_info_ref;
        inline app::Event__Array__Class* get_class() {
            return il2cpp::get_class<app::Event__Array__Class>(type_info, "UnityEngine", "Event[]");
        }
        inline app::Event__Array* create() {
            return il2cpp::create_object<app::Event__Array>(get_class());
        }
    } // namespace Event__Array
} // namespace app::classes::types
