#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace EAppOwnershipFlags__Enum {
        namespace {
            inline app::EAppOwnershipFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::EAppOwnershipFlags__Enum__Class** type_info = &type_info_ref;
        inline app::EAppOwnershipFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::EAppOwnershipFlags__Enum__Class>(type_info, "Steamworks", "EAppOwnershipFlags");
        }
        inline app::EAppOwnershipFlags__Enum* create() {
            return il2cpp::create_object<app::EAppOwnershipFlags__Enum>(get_class());
        }
    } // namespace EAppOwnershipFlags__Enum
} // namespace app::classes::types
