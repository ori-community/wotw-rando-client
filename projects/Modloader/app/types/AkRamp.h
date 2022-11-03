#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkRamp {
        namespace {
            inline app::AkRamp__Class* type_info_ref = nullptr;
        }
        inline app::AkRamp__Class** type_info = &type_info_ref;
        inline app::AkRamp__Class* get_class() {
            return il2cpp::get_class<app::AkRamp__Class>(type_info, "", "AkRamp");
        }
        inline app::AkRamp* create() {
            return il2cpp::create_object<app::AkRamp>(get_class());
        }
    } // namespace AkRamp
} // namespace app::classes::types
