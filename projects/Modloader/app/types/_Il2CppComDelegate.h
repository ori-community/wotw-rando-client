#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_Il2CppComDelegate__Class.h>
#include <Modloader/app/structs/_Il2CppComDelegate.h>

namespace app::classes::types {
    namespace _Il2CppComDelegate {
        namespace {
            inline app::_Il2CppComDelegate__Class* type_info_ref = nullptr;
        }
        inline app::_Il2CppComDelegate__Class** type_info = &type_info_ref;
        inline app::_Il2CppComDelegate__Class* get_class() {
            return il2cpp::get_class<app::_Il2CppComDelegate__Class>(type_info, "System", "__Il2CppComDelegate");
        }
        inline app::_Il2CppComDelegate* create() {
            return il2cpp::create_object<app::_Il2CppComDelegate>(get_class());
        }
    } // namespace _Il2CppComDelegate
} // namespace app::classes::types
