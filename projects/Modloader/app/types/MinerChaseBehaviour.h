#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>

namespace app::classes::types {
    namespace MinerChaseBehaviour {
        namespace {
            inline app::MinerChaseBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::MinerChaseBehaviour__Class** type_info = &type_info_ref;
        inline app::MinerChaseBehaviour__Class* get_class() {
            return il2cpp::get_class<app::MinerChaseBehaviour__Class>(type_info, "", "MinerChaseBehaviour");
        }
        inline app::MinerChaseBehaviour* create() {
            return il2cpp::create_object<app::MinerChaseBehaviour>(get_class());
        }
    } // namespace MinerChaseBehaviour
} // namespace app::classes::types
