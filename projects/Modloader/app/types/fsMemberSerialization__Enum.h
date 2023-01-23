#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/fsMemberSerialization__Enum__Class.h>
#include <Modloader/app/structs/fsMemberSerialization__Enum.h>

namespace app::classes::types {
    namespace fsMemberSerialization__Enum {
        namespace {
            inline app::fsMemberSerialization__Enum__Class* type_info_ref = nullptr;
        }
        inline app::fsMemberSerialization__Enum__Class** type_info = &type_info_ref;
        inline app::fsMemberSerialization__Enum__Class* get_class() {
            return il2cpp::get_class<app::fsMemberSerialization__Enum__Class>(type_info, "FullSerializer", "fsMemberSerialization");
        }
        inline app::fsMemberSerialization__Enum* create() {
            return il2cpp::create_object<app::fsMemberSerialization__Enum>(get_class());
        }
    } // namespace fsMemberSerialization__Enum
} // namespace app::classes::types
