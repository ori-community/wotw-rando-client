#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VSyncUtility__Class.h>
#include <Modloader/app/structs/VSyncUtility.h>

namespace app::classes::types {
    namespace VSyncUtility {
        namespace {
            inline app::VSyncUtility__Class* type_info_ref = nullptr;
        }
        inline app::VSyncUtility__Class** type_info = &type_info_ref;
        inline app::VSyncUtility__Class* get_class() {
            return il2cpp::get_class<app::VSyncUtility__Class>(type_info, "", "VSyncUtility");
        }
        inline app::VSyncUtility* create() {
            return il2cpp::create_object<app::VSyncUtility>(get_class());
        }
    } // namespace VSyncUtility
} // namespace app::classes::types
