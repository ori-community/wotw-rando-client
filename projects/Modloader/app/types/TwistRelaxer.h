#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace TwistRelaxer {
        namespace {
            inline app::TwistRelaxer__Class* type_info_ref = nullptr;
        }
        inline app::TwistRelaxer__Class** type_info = &type_info_ref;
        inline app::TwistRelaxer__Class* get_class() {
            return il2cpp::get_class<app::TwistRelaxer__Class>(type_info, "RootMotion.FinalIK", "TwistRelaxer");
        }
        inline app::TwistRelaxer* create() {
            return il2cpp::create_object<app::TwistRelaxer>(get_class());
        }
    } // namespace TwistRelaxer
} // namespace app::classes::types
