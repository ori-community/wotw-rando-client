#pragma once
#include <Modloader/app/structs/IKConstraintBend.h>
#include <Modloader/app/structs/IKConstraintBend__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace IKConstraintBend {
        inline app::IKConstraintBend__Class** type_info() {
            static app::IKConstraintBend__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::IKConstraintBend__Class**)(modloader::win::memory::resolve_rva(0x047654C8));
            }
            return cache;
        }
        inline app::IKConstraintBend__Class* get_class() {
            return il2cpp::get_class<app::IKConstraintBend__Class>(type_info(), "RootMotion.FinalIK", "IKConstraintBend");
        }
        inline app::IKConstraintBend* create() {
            return il2cpp::create_object<app::IKConstraintBend>(get_class());
        }
    } // namespace IKConstraintBend
} // namespace app::classes::types
