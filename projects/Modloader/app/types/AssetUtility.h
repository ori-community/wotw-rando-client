#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AssetUtility__Class.h>
#include <Modloader/app/structs/AssetUtility.h>

namespace app::classes::types {
    namespace AssetUtility {
        namespace {
            inline app::AssetUtility__Class* type_info_ref = nullptr;
        }
        inline app::AssetUtility__Class** type_info = &type_info_ref;
        inline app::AssetUtility__Class* get_class() {
            return il2cpp::get_class<app::AssetUtility__Class>(type_info, "", "AssetUtility");
        }
        inline app::AssetUtility* create() {
            return il2cpp::create_object<app::AssetUtility>(get_class());
        }
    } // namespace AssetUtility
} // namespace app::classes::types
