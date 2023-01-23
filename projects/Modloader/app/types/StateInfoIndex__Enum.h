#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/StateInfoIndex__Enum__Class.h>
#include <Modloader/app/structs/StateInfoIndex__Enum.h>

namespace app::classes::types {
    namespace StateInfoIndex__Enum {
        namespace {
            inline app::StateInfoIndex__Enum__Class* type_info_ref = nullptr;
        }
        inline app::StateInfoIndex__Enum__Class** type_info = &type_info_ref;
        inline app::StateInfoIndex__Enum__Class* get_class() {
            return il2cpp::get_class<app::StateInfoIndex__Enum__Class>(type_info, "UnityEngine", "StateInfoIndex");
        }
        inline app::StateInfoIndex__Enum* create() {
            return il2cpp::create_object<app::StateInfoIndex__Enum>(get_class());
        }
    } // namespace StateInfoIndex__Enum
} // namespace app::classes::types
