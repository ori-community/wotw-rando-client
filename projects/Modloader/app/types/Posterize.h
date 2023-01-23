#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/Posterize__Class.h>
#include <Modloader/app/structs/Posterize.h>

namespace app::classes::types {
    namespace Posterize {
        namespace {
            inline app::Posterize__Class* type_info_ref = nullptr;
        }
        inline app::Posterize__Class** type_info = &type_info_ref;
        inline app::Posterize__Class* get_class() {
            return il2cpp::get_class<app::Posterize__Class>(type_info, "Colorful", "Posterize");
        }
        inline app::Posterize* create() {
            return il2cpp::create_object<app::Posterize>(get_class());
        }
    } // namespace Posterize
} // namespace app::classes::types
