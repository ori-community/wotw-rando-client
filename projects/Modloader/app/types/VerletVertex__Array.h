#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletVertex__Array__Class.h>
#include <Modloader/app/structs/VerletVertex__Array.h>

namespace app::classes::types {
    namespace VerletVertex__Array {
        namespace {
            inline app::VerletVertex__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletVertex__Array__Class** type_info = &type_info_ref;
        inline app::VerletVertex__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletVertex__Array__Class>(type_info, "", "VerletVertex[]");
        }
        inline app::VerletVertex__Array* create() {
            return il2cpp::create_object<app::VerletVertex__Array>(get_class());
        }
    } // namespace VerletVertex__Array
} // namespace app::classes::types
