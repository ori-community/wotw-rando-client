#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SeinBow__Class.h>
#include <Modloader/app/structs/SeinBow.h>

namespace app::classes::types {
    namespace SeinBow {
        namespace {
            inline app::SeinBow__Class* type_info_ref = nullptr;
        }
        inline app::SeinBow__Class** type_info = &type_info_ref;
        inline app::SeinBow__Class* get_class() {
            return il2cpp::get_class<app::SeinBow__Class>(type_info, "", "SeinBow");
        }
        inline app::SeinBow* create() {
            return il2cpp::create_object<app::SeinBow>(get_class());
        }
    } // namespace SeinBow
} // namespace app::classes::types
