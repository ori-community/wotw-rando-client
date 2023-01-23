#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/FixedUpdateScheduler__Class.h>
#include <Modloader/app/structs/FixedUpdateScheduler.h>

namespace app::classes::types {
    namespace FixedUpdateScheduler {
        namespace {
            inline app::FixedUpdateScheduler__Class* type_info_ref = nullptr;
        }
        inline app::FixedUpdateScheduler__Class** type_info = &type_info_ref;
        inline app::FixedUpdateScheduler__Class* get_class() {
            return il2cpp::get_class<app::FixedUpdateScheduler__Class>(type_info, "", "FixedUpdateScheduler");
        }
        inline app::FixedUpdateScheduler* create() {
            return il2cpp::create_object<app::FixedUpdateScheduler>(get_class());
        }
    } // namespace FixedUpdateScheduler
} // namespace app::classes::types
