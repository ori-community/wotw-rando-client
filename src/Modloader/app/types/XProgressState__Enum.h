#pragma once
#include <Modloader/app/structs/XProgressState__Enum.h>
#include <Modloader/app/structs/XProgressState__Enum__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace XProgressState__Enum {
        inline app::XProgressState__Enum__Class** type_info() {
            static app::XProgressState__Enum__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::XProgressState__Enum__Class**)(modloader::win::memory::resolve_rva(0x0477E990));
            }
            return cache;
        }
        inline app::XProgressState__Enum__Class* get_class() {
            return il2cpp::get_class<app::XProgressState__Enum__Class>(type_info(), "SystemIntegration.Synchronizer.Achievements", "XProgressState");
        }
        inline app::XProgressState__Enum* create() {
            return il2cpp::create_object<app::XProgressState__Enum>(get_class());
        }
    } // namespace XProgressState__Enum
} // namespace app::classes::types
