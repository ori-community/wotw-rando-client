#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/TriggeredActionSequence__Class.h>
#include <Modloader/app/structs/TriggeredActionSequence.h>

namespace app::classes::types {
    namespace TriggeredActionSequence {
        namespace {
            inline app::TriggeredActionSequence__Class* type_info_ref = nullptr;
        }
        inline app::TriggeredActionSequence__Class** type_info = &type_info_ref;
        inline app::TriggeredActionSequence__Class* get_class() {
            return il2cpp::get_class<app::TriggeredActionSequence__Class>(type_info, "", "TriggeredActionSequence");
        }
        inline app::TriggeredActionSequence* create() {
            return il2cpp::create_object<app::TriggeredActionSequence>(get_class());
        }
    } // namespace TriggeredActionSequence
} // namespace app::classes::types
