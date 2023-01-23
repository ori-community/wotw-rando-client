#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/X509ChainStatusFlags__Enum_1__Class.h>
#include <Modloader/app/structs/X509ChainStatusFlags__Enum_1.h>

namespace app::classes::types {
    namespace X509ChainStatusFlags__Enum_1 {
        namespace {
            inline app::X509ChainStatusFlags__Enum_1__Class* type_info_ref = nullptr;
        }
        inline app::X509ChainStatusFlags__Enum_1__Class** type_info = &type_info_ref;
        inline app::X509ChainStatusFlags__Enum_1__Class* get_class() {
            return il2cpp::get_class<app::X509ChainStatusFlags__Enum_1__Class>(type_info, "Mono.Security.X509", "X509ChainStatusFlags");
        }
        inline app::X509ChainStatusFlags__Enum_1* create() {
            return il2cpp::create_object<app::X509ChainStatusFlags__Enum_1>(get_class());
        }
    } // namespace X509ChainStatusFlags__Enum_1
} // namespace app::classes::types
