#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace SequencePlatformAction {
        namespace {
            inline app::SequencePlatformAction__Class* type_info_ref = nullptr;
        }
        inline app::SequencePlatformAction__Class** type_info = &type_info_ref;
        inline app::SequencePlatformAction__Class* get_class() {
            return il2cpp::get_class<app::SequencePlatformAction__Class>(type_info, "", "SequencePlatformAction");
        }
        inline app::SequencePlatformAction* create() {
            return il2cpp::create_object<app::SequencePlatformAction>(get_class());
        }
    } // namespace SequencePlatformAction
} // namespace app::classes::types
