#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IcyFeralMinerPlaceholder {
        namespace {
            inline app::IcyFeralMinerPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::IcyFeralMinerPlaceholder__Class** type_info = &type_info_ref;
        inline app::IcyFeralMinerPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::IcyFeralMinerPlaceholder__Class>(type_info, "", "IcyFeralMinerPlaceholder");
        }
        inline app::IcyFeralMinerPlaceholder* create() {
            return il2cpp::create_object<app::IcyFeralMinerPlaceholder>(get_class());
        }
    } // namespace IcyFeralMinerPlaceholder
} // namespace app::classes::types
