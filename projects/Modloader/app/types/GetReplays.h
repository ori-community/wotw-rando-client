#pragma once
#include <Modloader/app/structs/GetReplays.h>
#include <Modloader/app/structs/GetReplays__Class.h>
#include <Modloader/il2cpp_helpers.h>
#include <Modloader/macros.h>

namespace app::classes::types {
    namespace GetReplays {
        inline app::GetReplays__Class** type_info() {
            static app::GetReplays__Class** cache = nullptr;
            if (cache == nullptr) {
                cache = (app::GetReplays__Class**)(modloader::win::memory::resolve_rva(0x0476A6D0));
            }
            return cache;
        }
        inline app::GetReplays__Class* get_class() {
            return il2cpp::get_class<app::GetReplays__Class>(type_info(), "", "GetReplays");
        }
        inline app::GetReplays* create() {
            return il2cpp::create_object<app::GetReplays>(get_class());
        }
    } // namespace GetReplays
} // namespace app::classes::types
