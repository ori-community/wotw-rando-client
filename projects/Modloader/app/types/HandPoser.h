#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace HandPoser {
        namespace {
            inline app::HandPoser__Class* type_info_ref = nullptr;
        }
        inline app::HandPoser__Class** type_info = &type_info_ref;
        inline app::HandPoser__Class* get_class() {
            return il2cpp::get_class<app::HandPoser__Class>(type_info, "RootMotion.FinalIK", "HandPoser");
        }
        inline app::HandPoser* create() {
            return il2cpp::create_object<app::HandPoser>(get_class());
        }
    } // namespace HandPoser
} // namespace app::classes::types
