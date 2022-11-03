#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace DestructibleStalactite {
        namespace {
            inline app::DestructibleStalactite__Class* type_info_ref = nullptr;
        }
        inline app::DestructibleStalactite__Class** type_info = &type_info_ref;
        inline app::DestructibleStalactite__Class* get_class() {
            return il2cpp::get_class<app::DestructibleStalactite__Class>(type_info, "", "DestructibleStalactite");
        }
        inline app::DestructibleStalactite* create() {
            return il2cpp::create_object<app::DestructibleStalactite>(get_class());
        }
    } // namespace DestructibleStalactite
} // namespace app::classes::types
