#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/EffectorOffset__Class.h>
#include <Modloader/app/structs/EffectorOffset.h>

namespace app::classes::types {
    namespace EffectorOffset {
        namespace {
            inline app::EffectorOffset__Class* type_info_ref = nullptr;
        }
        inline app::EffectorOffset__Class** type_info = &type_info_ref;
        inline app::EffectorOffset__Class* get_class() {
            return il2cpp::get_class<app::EffectorOffset__Class>(type_info, "RootMotion.Demos", "EffectorOffset");
        }
        inline app::EffectorOffset* create() {
            return il2cpp::create_object<app::EffectorOffset>(get_class());
        }
    } // namespace EffectorOffset
} // namespace app::classes::types
