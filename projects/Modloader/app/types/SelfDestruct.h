#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SelfDestruct__Class.h>
#include <Modloader/app/structs/SelfDestruct.h>

namespace app::classes::types {
    namespace SelfDestruct {
        namespace {
            inline app::SelfDestruct__Class* type_info_ref = nullptr;
        }
        inline app::SelfDestruct__Class** type_info = &type_info_ref;
        inline app::SelfDestruct__Class* get_class() {
            return il2cpp::get_class<app::SelfDestruct__Class>(type_info, "", "SelfDestruct");
        }
        inline app::SelfDestruct* create() {
            return il2cpp::create_object<app::SelfDestruct>(get_class());
        }
    } // namespace SelfDestruct
} // namespace app::classes::types
