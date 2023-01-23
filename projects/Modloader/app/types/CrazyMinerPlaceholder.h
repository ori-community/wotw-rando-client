#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/CrazyMinerPlaceholder__Class.h>
#include <Modloader/app/structs/CrazyMinerPlaceholder.h>

namespace app::classes::types {
    namespace CrazyMinerPlaceholder {
        namespace {
            inline app::CrazyMinerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::CrazyMinerPlaceholder__Class** type_info = &type_info_ref;
        inline app::CrazyMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::CrazyMinerPlaceholder__Class>(type_info, "", "CrazyMinerPlaceholder");
        }
        inline app::CrazyMinerPlaceholder* create() {
            return il2cpp::create_object<app::CrazyMinerPlaceholder>(get_class());
        }
    } // namespace CrazyMinerPlaceholder
} // namespace app::classes::types
