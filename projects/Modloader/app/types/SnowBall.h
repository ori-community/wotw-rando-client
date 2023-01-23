#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/SnowBall__Class.h>
#include <Modloader/app/structs/SnowBall.h>

namespace app::classes::types {
    namespace SnowBall {
        namespace {
            inline app::SnowBall__Class* type_info_ref = nullptr;
        }
        inline app::SnowBall__Class** type_info = &type_info_ref;
        inline app::SnowBall__Class* get_class() {
            return il2cpp::get_class<app::SnowBall__Class>(type_info, "", "SnowBall");
        }
        inline app::SnowBall* create() {
            return il2cpp::create_object<app::SnowBall>(get_class());
        }
    } // namespace SnowBall
} // namespace app::classes::types
