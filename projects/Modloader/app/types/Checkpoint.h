#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace Checkpoint {
        namespace {
            inline app::Checkpoint__Class* type_info_ref = nullptr;
        }
        inline app::Checkpoint__Class** type_info = &type_info_ref;
        inline app::Checkpoint__Class* get_class() {
            return il2cpp::get_class<app::Checkpoint__Class>(type_info, "", "Checkpoint");
        }
        inline app::Checkpoint* create() {
            return il2cpp::create_object<app::Checkpoint>(get_class());
        }
    } // namespace Checkpoint
} // namespace app::classes::types
