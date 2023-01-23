#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RGBSplit__Class.h>
#include <Modloader/app/structs/RGBSplit.h>

namespace app::classes::types {
    namespace RGBSplit {
        namespace {
            inline app::RGBSplit__Class* type_info_ref = nullptr;
        }
        inline app::RGBSplit__Class** type_info = &type_info_ref;
        inline app::RGBSplit__Class* get_class() {
            return il2cpp::get_class<app::RGBSplit__Class>(type_info, "Colorful", "RGBSplit");
        }
        inline app::RGBSplit* create() {
            return il2cpp::create_object<app::RGBSplit>(get_class());
        }
    } // namespace RGBSplit
} // namespace app::classes::types
