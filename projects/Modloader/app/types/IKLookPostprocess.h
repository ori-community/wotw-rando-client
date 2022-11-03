#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace IKLookPostprocess {
        namespace {
            inline app::IKLookPostprocess__Class* type_info_ref = nullptr;
        }
        inline app::IKLookPostprocess__Class** type_info = &type_info_ref;
        inline app::IKLookPostprocess__Class* get_class() {
            return il2cpp::get_class<app::IKLookPostprocess__Class>(type_info, "Moon", "IKLookPostprocess");
        }
        inline app::IKLookPostprocess* create() {
            return il2cpp::create_object<app::IKLookPostprocess>(get_class());
        }
    } // namespace IKLookPostprocess
} // namespace app::classes::types
