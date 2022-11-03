#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace ActionSequenceSerializer {
        namespace {
            inline app::ActionSequenceSerializer__Class* type_info_ref = nullptr;
        }
        inline app::ActionSequenceSerializer__Class** type_info = &type_info_ref;
        inline app::ActionSequenceSerializer__Class* get_class() {
            return il2cpp::get_class<app::ActionSequenceSerializer__Class>(type_info, "", "ActionSequenceSerializer");
        }
        inline app::ActionSequenceSerializer* create() {
            return il2cpp::create_object<app::ActionSequenceSerializer>(get_class());
        }
    } // namespace ActionSequenceSerializer
} // namespace app::classes::types
