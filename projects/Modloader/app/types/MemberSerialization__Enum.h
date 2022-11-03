#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MemberSerialization__Enum {
        namespace {
            inline app::MemberSerialization__Enum__Class* type_info_ref = nullptr;
        }
        inline app::MemberSerialization__Enum__Class** type_info = &type_info_ref;
        inline app::MemberSerialization__Enum__Class* get_class() {
            return il2cpp::get_class<app::MemberSerialization__Enum__Class>(type_info, "Newtonsoft.Json", "MemberSerialization");
        }
        inline app::MemberSerialization__Enum* create() {
            return il2cpp::create_object<app::MemberSerialization__Enum>(get_class());
        }
    } // namespace MemberSerialization__Enum
} // namespace app::classes::types
