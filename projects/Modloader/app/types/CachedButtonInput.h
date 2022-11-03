#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace CachedButtonInput {
        namespace {
            inline app::CachedButtonInput__Class* type_info_ref = nullptr;
        }
        inline app::CachedButtonInput__Class** type_info = &type_info_ref;
        inline app::CachedButtonInput__Class* get_class() {
            return il2cpp::get_class<app::CachedButtonInput__Class>(type_info, "SmartInput", "CachedButtonInput");
        }
        inline app::CachedButtonInput* create() {
            return il2cpp::create_object<app::CachedButtonInput>(get_class());
        }
    } // namespace CachedButtonInput
} // namespace app::classes::types
