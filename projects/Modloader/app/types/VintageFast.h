#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VintageFast__Class.h>
#include <Modloader/app/structs/VintageFast.h>

namespace app::classes::types {
    namespace VintageFast {
        namespace {
            inline app::VintageFast__Class* type_info_ref = nullptr;
        }
        inline app::VintageFast__Class** type_info = &type_info_ref;
        inline app::VintageFast__Class* get_class() {
            return il2cpp::get_class<app::VintageFast__Class>(type_info, "Colorful", "VintageFast");
        }
        inline app::VintageFast* create() {
            return il2cpp::create_object<app::VintageFast>(get_class());
        }
    } // namespace VintageFast
} // namespace app::classes::types
