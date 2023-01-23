#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/INestedContainer__Class.h>

namespace app::classes::types {
    namespace INestedContainer {
        namespace {
            inline app::INestedContainer__Class* type_info_ref = nullptr;
        }
        inline app::INestedContainer__Class** type_info = &type_info_ref;
        inline app::INestedContainer__Class* get_class() {
            return il2cpp::get_class<app::INestedContainer__Class>(type_info, "System.ComponentModel", "INestedContainer");
        }
    } // namespace INestedContainer
} // namespace app::classes::types
