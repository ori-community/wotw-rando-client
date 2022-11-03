#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace AkMeteringFlags__Enum {
        namespace {
            inline app::AkMeteringFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::AkMeteringFlags__Enum__Class** type_info = &type_info_ref;
        inline app::AkMeteringFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::AkMeteringFlags__Enum__Class>(type_info, "", "AkMeteringFlags");
        }
        inline app::AkMeteringFlags__Enum* create() {
            return il2cpp::create_object<app::AkMeteringFlags__Enum>(get_class());
        }
    } // namespace AkMeteringFlags__Enum
} // namespace app::classes::types
