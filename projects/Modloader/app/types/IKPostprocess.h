#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/IKPostprocess__Class.h>
#include <Modloader/app/structs/IKPostprocess.h>

namespace app::classes::types {
    namespace IKPostprocess {
        namespace {
            inline app::IKPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::IKPostprocess__Class** type_info = &type_info_ref;
        inline app::IKPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKPostprocess__Class>(type_info, "Moon", "IKPostprocess");
        }
        inline app::IKPostprocess* create() {
            return il2cpp::create_object<app::IKPostprocess>(get_class());
        }
    } // namespace IKPostprocess
} // namespace app::classes::types
