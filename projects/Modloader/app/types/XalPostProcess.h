#pragma once
#include <Modloader/app/structs/XalPostProcess.h>
#include <Modloader/app/structs/XalPostProcess__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XalPostProcess {
        inline app::XalPostProcess__Class** type_info() {
            static app::XalPostProcess__Class** cache = nullptr;
            if (cache == nullptr) {
                static app::XalPostProcess__Class* type_info_ref = nullptr;
                cache = &type_info_ref;
            }
            return cache;
        }
        inline app::XalPostProcess__Class* get_class() {
            return il2cpp::get_class<app::XalPostProcess__Class>(type_info(), "", "XalPostProcess");
        }
        inline app::XalPostProcess* create() {
            return il2cpp::create_object<app::XalPostProcess>(get_class());
        }
    } // namespace XalPostProcess
} // namespace app::classes::types
