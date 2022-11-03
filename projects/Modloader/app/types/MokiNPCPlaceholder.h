#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MokiNPCPlaceholder {
        namespace {
            inline app::MokiNPCPlaceholder__Class* type_info_ref = nullptr;
        }
        inline app::MokiNPCPlaceholder__Class** type_info = &type_info_ref;
        inline app::MokiNPCPlaceholder__Class* get_class() {
            return il2cpp::get_class<app::MokiNPCPlaceholder__Class>(type_info, "", "MokiNPCPlaceholder");
        }
        inline app::MokiNPCPlaceholder* create() {
            return il2cpp::create_object<app::MokiNPCPlaceholder>(get_class());
        }
    } // namespace MokiNPCPlaceholder
} // namespace app::classes::types
