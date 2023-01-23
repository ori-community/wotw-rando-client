#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/DirtyUtility__Class.h>
#include <Modloader/app/structs/DirtyUtility.h>

namespace app::classes::types {
    namespace DirtyUtility {
        namespace {
            inline app::DirtyUtility__Class* type_info_ref = nullptr;
        }
        inline app::DirtyUtility__Class** type_info = &type_info_ref;
        inline app::DirtyUtility__Class* get_class() {
            return il2cpp::get_class<app::DirtyUtility__Class>(type_info, "", "DirtyUtility");
        }
        inline app::DirtyUtility* create() {
            return il2cpp::create_object<app::DirtyUtility>(get_class());
        }
    } // namespace DirtyUtility
} // namespace app::classes::types
