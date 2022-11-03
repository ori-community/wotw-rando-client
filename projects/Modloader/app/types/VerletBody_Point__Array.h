#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace VerletBody_Point__Array {
        namespace {
            inline app::VerletBody_Point__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletBody_Point__Array__Class** type_info = &type_info_ref;
        inline app::VerletBody_Point__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBody_Point__Array__Class>(type_info, "Moon", "VerletBody+Point[]");
        }
        inline app::VerletBody_Point__Array* create() {
            return il2cpp::create_object<app::VerletBody_Point__Array>(get_class());
        }
    } // namespace VerletBody_Point__Array
} // namespace app::classes::types
