#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/BabyCrabEntity__Array__Class.h>
#include <Modloader/app/structs/BabyCrabEntity__Array.h>

namespace app::classes::types {
    namespace BabyCrabEntity__Array {
        namespace {
            inline app::BabyCrabEntity__Array__Class* type_info_ref = nullptr;
        }
        inline app::BabyCrabEntity__Array__Class** type_info = &type_info_ref;
        inline app::BabyCrabEntity__Array__Class* get_class() {
            return il2cpp::get_class<app::BabyCrabEntity__Array__Class>(type_info, "", "BabyCrabEntity[]");
        }
        inline app::BabyCrabEntity__Array* create() {
            return il2cpp::create_object<app::BabyCrabEntity__Array>(get_class());
        }
    } // namespace BabyCrabEntity__Array
} // namespace app::classes::types
