#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/AngularSpring__Class.h>
#include <Modloader/app/structs/AngularSpring.h>

namespace app::classes::types {
    namespace AngularSpring {
        namespace {
            inline app::AngularSpring__Class* type_info_ref = nullptr;
        }
        inline app::AngularSpring__Class** type_info = &type_info_ref;
        inline app::AngularSpring__Class* get_class() {
            return il2cpp::get_class<app::AngularSpring__Class>(type_info, "", "AngularSpring");
        }
        inline app::AngularSpring* create() {
            return il2cpp::create_object<app::AngularSpring>(get_class());
        }
    } // namespace AngularSpring
} // namespace app::classes::types
