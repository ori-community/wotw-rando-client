#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour__Class.h>
#include <Modloader/app/structs/SkeetoAirMoveBehaviour.h>

namespace app::classes::types {
    namespace SkeetoAirMoveBehaviour {
        namespace {
            inline app::SkeetoAirMoveBehaviour__Class* type_info_ref = nullptr;
        }
        inline app::SkeetoAirMoveBehaviour__Class** type_info = &type_info_ref;
        inline app::SkeetoAirMoveBehaviour__Class* get_class() {
            return il2cpp::get_class<app::SkeetoAirMoveBehaviour__Class>(type_info, "", "SkeetoAirMoveBehaviour");
        }
        inline app::SkeetoAirMoveBehaviour* create() {
            return il2cpp::create_object<app::SkeetoAirMoveBehaviour>(get_class());
        }
    } // namespace SkeetoAirMoveBehaviour
} // namespace app::classes::types
