#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Guid_GuidParseThrowStyle__Enum {
        namespace {
            inline app::Guid_GuidParseThrowStyle__Enum__Class* type_info_ref = nullptr;
        }
        inline app::Guid_GuidParseThrowStyle__Enum__Class** type_info = &type_info_ref;
        inline app::Guid_GuidParseThrowStyle__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::Guid_GuidParseThrowStyle__Enum__Class>(type_info, "System", "Guid", "GuidParseThrowStyle");
        }
        inline app::Guid_GuidParseThrowStyle__Enum* create() {
            return il2cpp::create_object<app::Guid_GuidParseThrowStyle__Enum>(get_class());
        }
    } // namespace Guid_GuidParseThrowStyle__Enum
} // namespace app::classes::types
