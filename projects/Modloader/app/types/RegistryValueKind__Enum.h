#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/RegistryValueKind__Enum__Class.h>
#include <Modloader/app/structs/RegistryValueKind__Enum.h>

namespace app::classes::types {
    namespace RegistryValueKind__Enum {
        namespace {
            inline app::RegistryValueKind__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RegistryValueKind__Enum__Class** type_info = &type_info_ref;
        inline app::RegistryValueKind__Enum__Class* get_class() {
            return il2cpp::get_class<app::RegistryValueKind__Enum__Class>(type_info, "Microsoft.Win32", "RegistryValueKind");
        }
        inline app::RegistryValueKind__Enum* create() {
            return il2cpp::create_object<app::RegistryValueKind__Enum>(get_class());
        }
    } // namespace RegistryValueKind__Enum
} // namespace app::classes::types
