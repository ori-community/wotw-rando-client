#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/_ArrayPoolDefault__Class.h>
#include <Modloader/app/structs/_ArrayPoolDefault.h>

namespace app::classes::types {
    namespace _ArrayPoolDefault {
        namespace {
            inline app::_ArrayPoolDefault__Class* type_info_ref = nullptr;
        }
        inline app::_ArrayPoolDefault__Class** type_info = &type_info_ref;
        inline app::_ArrayPoolDefault__Class* get_class() {
            return il2cpp::get_class<app::_ArrayPoolDefault__Class>(type_info, "", "_ArrayPoolDefault");
        }
        inline app::_ArrayPoolDefault* create() {
            return il2cpp::create_object<app::_ArrayPoolDefault>(get_class());
        }
    } // namespace _ArrayPoolDefault
} // namespace app::classes::types
