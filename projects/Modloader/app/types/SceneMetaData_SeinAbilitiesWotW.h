#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW__Class.h>
#include <Modloader/app/structs/SceneMetaData_SeinAbilitiesWotW.h>

namespace app::classes::types {
    namespace SceneMetaData_SeinAbilitiesWotW {
        inline app::SceneMetaData_SeinAbilitiesWotW__Class** type_info = (app::SceneMetaData_SeinAbilitiesWotW__Class**)(modloader::win::memory::resolve_rva(0x04705A70));
        inline app::SceneMetaData_SeinAbilitiesWotW__Class* get_class() {
            return il2cpp::get_nested_class<app::SceneMetaData_SeinAbilitiesWotW__Class>(type_info, "", "SceneMetaData", "SeinAbilitiesWotW");
        }
        inline app::SceneMetaData_SeinAbilitiesWotW* create() {
            return il2cpp::create_object<app::SceneMetaData_SeinAbilitiesWotW>(get_class());
        }
    } // namespace SceneMetaData_SeinAbilitiesWotW
} // namespace app::classes::types
