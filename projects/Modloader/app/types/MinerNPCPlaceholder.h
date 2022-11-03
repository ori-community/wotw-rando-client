#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerNPCPlaceholder {
        namespace {
            inline app::MinerNPCPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::MinerNPCPlaceholder__Class** type_info = &type_info_ref;
        inline app::MinerNPCPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MinerNPCPlaceholder__Class>(type_info, "", "MinerNPCPlaceholder");
        }
        inline app::MinerNPCPlaceholder* create() {
            return il2cpp::create_object<app::MinerNPCPlaceholder>(get_class());
        }
    } // namespace MinerNPCPlaceholder
} // namespace app::classes::types
