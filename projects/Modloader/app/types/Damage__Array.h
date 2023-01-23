#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Damage__Array__Class.h>
#include <Modloader/app/structs/Damage__Array.h>

namespace app::classes::types {
    namespace Damage__Array {
        namespace {
            inline app::Damage__Array__Class* type_info_ref = nullptr;
        }
        inline app::Damage__Array__Class** type_info = &type_info_ref;
        inline app::Damage__Array__Class* get_class() {
            return il2cpp::get_class<app::Damage__Array__Class>(type_info, "", "Damage[]");
        }
        inline app::Damage__Array* create() {
            return il2cpp::create_object<app::Damage__Array>(get_class());
        }
    } // namespace Damage__Array
} // namespace app::classes::types
