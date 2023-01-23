#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FeralMinerPlaceholder__Class.h>
#include <Modloader/app/structs/FeralMinerPlaceholder.h>

namespace app::classes::types {
    namespace FeralMinerPlaceholder {
        namespace {
            inline app::FeralMinerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::FeralMinerPlaceholder__Class** type_info = &type_info_ref;
        inline app::FeralMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::FeralMinerPlaceholder__Class>(type_info, "", "FeralMinerPlaceholder");
        }
        inline app::FeralMinerPlaceholder* create() {
            return il2cpp::create_object<app::FeralMinerPlaceholder>(get_class());
        }
    } // namespace FeralMinerPlaceholder
} // namespace app::classes::types
