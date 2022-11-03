#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace RestrictionFlags__Enum {
        namespace {
            inline app::RestrictionFlags__Enum__Class* type_info_ref = nullptr;
        }
        inline app::RestrictionFlags__Enum__Class** type_info = &type_info_ref;
        inline app::RestrictionFlags__Enum__Class* get_class() {
            return il2cpp::get_class<app::RestrictionFlags__Enum__Class>(type_info, "System.Xml.Schema", "RestrictionFlags");
        }
        inline app::RestrictionFlags__Enum* create() {
            return il2cpp::create_object<app::RestrictionFlags__Enum>(get_class());
        }
    } // namespace RestrictionFlags__Enum
} // namespace app::classes::types
