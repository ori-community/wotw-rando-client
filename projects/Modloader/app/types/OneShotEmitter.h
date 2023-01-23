#pragma once
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>
#include <Modloader/windows_api/memory.h>
#include <Modloader/app/structs/OneShotEmitter__Class.h>
#include <Modloader/app/structs/OneShotEmitter.h>

namespace app::classes::types {
    namespace OneShotEmitter {
        namespace {
            inline app::OneShotEmitter__Class* type_info_ref = nullptr;
        }
        inline app::OneShotEmitter__Class** type_info = &type_info_ref;
        inline app::OneShotEmitter__Class* get_class() {
            return il2cpp::get_class<app::OneShotEmitter__Class>(type_info, "", "OneShotEmitter");
        }
        inline app::OneShotEmitter* create() {
            return il2cpp::create_object<app::OneShotEmitter>(get_class());
        }
    } // namespace OneShotEmitter
} // namespace app::classes::types
