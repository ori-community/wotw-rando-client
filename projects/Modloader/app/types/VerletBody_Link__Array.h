#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletBody_Link__Array__Class.h>
#include <Modloader/app/structs/VerletBody_Link__Array.h>

namespace app::classes::types {
    namespace VerletBody_Link__Array {
        namespace {
            inline app::VerletBody_Link__Array__Class* type_info_ref = nullptr;
        }
        inline app::VerletBody_Link__Array__Class** type_info = &type_info_ref;
        inline app::VerletBody_Link__Array__Class* get_class() {
            return il2cpp::get_class<app::VerletBody_Link__Array__Class>(type_info, "Moon", "VerletBody+Link[]");
        }
        inline app::VerletBody_Link__Array* create() {
            return il2cpp::create_object<app::VerletBody_Link__Array>(get_class());
        }
    } // namespace VerletBody_Link__Array
} // namespace app::classes::types
