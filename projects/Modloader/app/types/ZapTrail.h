#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ZapTrail {
        namespace {
            inline app::ZapTrail__Class* type_info_ref = nullptr;
        }
        inline app::ZapTrail__Class** type_info = &type_info_ref;
        inline app::ZapTrail__Class* get_class() {
            return il2cpp::get_class<app::ZapTrail__Class>(type_info, "", "ZapTrail");
        }
        inline app::ZapTrail* create() {
            return il2cpp::create_object<app::ZapTrail>(get_class());
        }
    } // namespace ZapTrail
} // namespace app::classes::types
