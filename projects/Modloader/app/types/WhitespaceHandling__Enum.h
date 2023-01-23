#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/WhitespaceHandling__Enum__Class.h>
#include <Modloader/app/structs/WhitespaceHandling__Enum.h>

namespace app::classes::types {
    namespace WhitespaceHandling__Enum {
        namespace {
            inline app::WhitespaceHandling__Enum__Class* type_info_ref = nullptr;
        }
        inline app::WhitespaceHandling__Enum__Class** type_info = &type_info_ref;
        inline app::WhitespaceHandling__Enum__Class* get_class() {
            return il2cpp::get_class<app::WhitespaceHandling__Enum__Class>(type_info, "System.Xml", "WhitespaceHandling");
        }
        inline app::WhitespaceHandling__Enum* create() {
            return il2cpp::create_object<app::WhitespaceHandling__Enum>(get_class());
        }
    } // namespace WhitespaceHandling__Enum
} // namespace app::classes::types
