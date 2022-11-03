#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DataUtility {
        namespace {
            inline app::DataUtility__Class* type_info_ref = nullptr;
        }
        inline app::DataUtility__Class** type_info = &type_info_ref;
        inline app::DataUtility__Class* get_class() {
            return il2cpp::get_class<app::DataUtility__Class>(type_info, "UnityEngine.Sprites", "DataUtility");
        }
        inline app::DataUtility* create() {
            return il2cpp::create_object<app::DataUtility>(get_class());
        }
    } // namespace DataUtility
} // namespace app::classes::types
