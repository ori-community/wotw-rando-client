#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/NamespaceHandling__Enum__Class.h>
#include <Modloader/app/structs/NamespaceHandling__Enum.h>

namespace app::classes::types {
    namespace NamespaceHandling__Enum {
        namespace {
            inline app::NamespaceHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::NamespaceHandling__Enum__Class** type_info = &type_info_ref;
        inline app::NamespaceHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::NamespaceHandling__Enum__Class>(type_info, "System.Xml", "NamespaceHandling");
        }
        inline app::NamespaceHandling__Enum* create() {
            return il2cpp::create_object<app::NamespaceHandling__Enum>(get_class());
        }
    } // namespace NamespaceHandling__Enum
} // namespace app::classes::types
