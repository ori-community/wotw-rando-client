#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace PooledSafeAttribute {
        namespace {
            inline app::PooledSafeAttribute__Class* type_info_ref = nullptr;
        }
        inline app::PooledSafeAttribute__Class** type_info = &type_info_ref;
        inline app::PooledSafeAttribute__Class* get_class() {
            return il2cpp::get_class<app::PooledSafeAttribute__Class>(type_info, "", "PooledSafeAttribute");
        }
        inline app::PooledSafeAttribute* create() {
            return il2cpp::create_object<app::PooledSafeAttribute>(get_class());
        }
    } // namespace PooledSafeAttribute
} // namespace app::classes::types
