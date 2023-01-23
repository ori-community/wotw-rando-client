#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/UriPartial__Enum__Class.h>
#include <Modloader/app/structs/UriPartial__Enum.h>

namespace app::classes::types {
    namespace UriPartial__Enum {
        namespace {
            inline app::UriPartial__Enum__Class* type_info_ref = nullptr;
        }
        inline app::UriPartial__Enum__Class** type_info = &type_info_ref;
        inline app::UriPartial__Enum__Class* get_class() {
            return il2cpp::get_class<app::UriPartial__Enum__Class>(type_info, "System", "UriPartial");
        }
        inline app::UriPartial__Enum* create() {
            return il2cpp::create_object<app::UriPartial__Enum>(get_class());
        }
    } // namespace UriPartial__Enum
} // namespace app::classes::types
