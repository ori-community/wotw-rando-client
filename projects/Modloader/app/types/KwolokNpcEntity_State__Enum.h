#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/KwolokNpcEntity_State__Enum__Class.h>
#include <Modloader/app/structs/KwolokNpcEntity_State__Enum.h>

namespace app::classes::types {
    namespace KwolokNpcEntity_State__Enum {
        namespace {
            inline app::KwolokNpcEntity_State__Enum__Class* type_info_ref = nullptr;
        }
        inline app::KwolokNpcEntity_State__Enum__Class** type_info = &type_info_ref;
        inline app::KwolokNpcEntity_State__Enum__Class* get_class() {
            return il2cpp::get_nested_class<app::KwolokNpcEntity_State__Enum__Class>(type_info, "", "KwolokNpcEntity", "State");
        }
        inline app::KwolokNpcEntity_State__Enum* create() {
            return il2cpp::create_object<app::KwolokNpcEntity_State__Enum>(get_class());
        }
    } // namespace KwolokNpcEntity_State__Enum
} // namespace app::classes::types
