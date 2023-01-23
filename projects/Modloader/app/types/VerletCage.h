#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/VerletCage__Class.h>
#include <Modloader/app/structs/VerletCage.h>

namespace app::classes::types {
    namespace VerletCage {
        namespace {
            inline app::VerletCage__Class* type_info_ref = nullptr;
        }
        inline app::VerletCage__Class** type_info = &type_info_ref;
        inline app::VerletCage__Class* get_class() {
            return il2cpp::get_class<app::VerletCage__Class>(type_info, "", "VerletCage");
        }
        inline app::VerletCage* create() {
            return il2cpp::create_object<app::VerletCage>(get_class());
        }
    } // namespace VerletCage
} // namespace app::classes::types
