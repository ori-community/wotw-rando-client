#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/ColosseumBase__Class.h>
#include <Modloader/app/structs/ColosseumBase.h>

namespace app::classes::types {
    namespace ColosseumBase {
        namespace {
            inline app::ColosseumBase__Class* type_info_ref = nullptr;
        }
        inline app::ColosseumBase__Class** type_info = &type_info_ref;
        inline app::ColosseumBase__Class* get_class() {
            return il2cpp::get_class<app::ColosseumBase__Class>(type_info, "", "ColosseumBase");
        }
        inline app::ColosseumBase* create() {
            return il2cpp::create_object<app::ColosseumBase>(get_class());
        }
    } // namespace ColosseumBase
} // namespace app::classes::types
